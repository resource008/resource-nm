#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>

#define STORAGE_ID "/shm-test"
#define STORAGE_SIZE 64
#define DATA "Hello receiver... I am sender with PID %d"

int main (){
	int shmFd, shmSize, pagesize, fd, length;
	char *ptr, data[STORAGE_SIZE];
	FILE *fp;
	pid_t pid;

	pid = getpid();
	sprintf(data, DATA, pid);

	pagesize = getpagesize();
	shmFd = shm_open(STORAGE_ID, O_CREAT | O_EXCL | O_RDWR, 0600);
	if(shmFd == -1){
		perror("Error shm: ");
	}

	shmSize = ftruncate(shmFd, STORAGE_SIZE);
	if(shmSize == -1){
		perror("Error ftruncate: ");
	}

	ptr = mmap(0, pagesize, PROT_READ | PROT_WRITE, MAP_SHARED, shmFd, 0);
	if(ptr == MAP_FAILED){
		perror("Error MAP: ");
	}
	printf("Sender address: %p\n", ptr);
	length = strlen(data) + 1;
	memcpy(ptr, data, length);

	fp = fopen("mapFile.txt", "w+");
	if(fp == NULL){
		perror("Error File: ");
	}

	fprintf(fp, "%s\n" , ptr);
	fclose(fp);

	printf("%s\n", ptr);
	munmap(ptr, STORAGE_SIZE);
	close (shmFd);

	return(0);
}
