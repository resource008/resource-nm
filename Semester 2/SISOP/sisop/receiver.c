#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define STORAGE_ID "/shm-test"
#define STORAGE_SIZE 64
#define DATA "Hello Sender... I am receiver with PID %d"

int main(){
    int shmFd, length;
    char *ptr, data[STORAGE_SIZE];
    pid_t pid;
    FILE *fp;

    pid = getpid();
    sprintf(data, DATA, pid);

    shmFd = shm_open(STORAGE_ID, O_RDWR, 0777);
    if(shmFd == -1){
        perror("Error shm_open: ");
        return 1;
    }

    ptr = mmap(0, STORAGE_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, shmFd, 0);
    if(ptr == MAP_FAILED) {
        perror("Error mmap: ");
        return 1;
    }
    printf("Receiver address: %p\n", ptr);

    length = strlen(data) + 1;
    memcpy(ptr, data, length);

    fp = fopen("mapFile.txt", "w+");
    if(fp == NULL){
        perror("Error fopen: ");
        return 1;
    }

    fprintf(fp, "%s\n", ptr);
    fclose(fp);

    printf("%s\n", ptr);
    munmap(ptr, STORAGE_SIZE);
    close(shmFd);
    shm_unlink(STORAGE_ID);
    return 0;
}
