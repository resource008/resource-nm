#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
        char *s;
        char *p = "malloc";

        s = (char*) malloc((strlen(p)+1));

        //printf("%s", p);

        if(s == NULL){
                printf("Memori tidak dapat dialokasi menggunakan malloc");
        }else{
                strcpy(s, p);
                printf("String dari p adalah %s\n", s);
        }

        free(s);

}

