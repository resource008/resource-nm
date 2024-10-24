#include <stdio.h>
#include <stdlib.h>

int main(){
        int *x, *y;

        x = malloc (50 * sizeof(int));

        if(!x){
                perror ("Memori tidak dapat dialokasikan menggunakan malloc");
                return -1;
        }else{
                printf("Memori tidak dapat dialokasikan menggunakan malloc\n");
        }

        y = calloc (50, sizeof(int));

        if(!y){
                perror("Memori tidak dapat dialokasikan menggunakan calloc");
                return -1;
        }else{
                printf("Memori dapat dialokasikan menggunakan calloc\n");
        }

        return 0;
}

