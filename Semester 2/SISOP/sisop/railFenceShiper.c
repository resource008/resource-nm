#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void encryptPlaintext(char *text, int key);

int main(){
        int fd, pagesize, key=3;
        char *ptr;

        fd = open("plainText.txt", O_RDWR | O_CREAT, S_IRWXU);
        pagesize = getpagesize();
        ptr = (char*) mmap(NULL, pagesize, PROT_READ|PROT_WRITE, MAP_PRIVATE, fd, 0);

        if(ptr == MAP_FAILED){
                perror("Error: ");
                exit(1);
        }

        close(fd);

        printf("Mapped at: %p\n", ptr);
        printf("Plaintext: %s \n", ptr);
        encryptPlaintext(ptr, key);

        munmap(ptr, pagesize);

        return (0);
}

void encryptPlaintext(char *text, int key){
        FILE *fp;
        int i, j, k = -1, col = 0, row = 0;
        int textLength = strlen(text);
        char rail[key][textLength];

        for(i=0; i < key; ++i){
                for(j = 0; j < textLength; ++j){
                        rail[i][j] = '\n';
                }
        }

        for(i=0;i < textLength; ++i){
                rail[row][col] = text[i];
                col++;

                if(row == 0 || row == key-1){
                        k = k * (-1);
                }
                row = row + k;
        }

        fp = fopen("chipertext.txt", "w+");
        if(fp == NULL){
                perror("Error: ");
                exit(1);
        }

        printf("Encrypted Plaintext: ");
        for(i=0;i < key; ++i){
                for(j=0; j < textLength; ++j){
                        if(rail[i][j] != '\n'){
                                printf("%c", rail[i][j]);
                                fprintf(fp, "%c", rail[i][j]);
                        }
                }
        }

        fclose(fp);
        printf("\n");
}
