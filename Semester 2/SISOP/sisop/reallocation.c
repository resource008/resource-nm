#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
        char *s;
        char *p = "manajemen";

        s = (char*) malloc((strlen(p)+1));

        //printf("%s", p);

        if(s == NULL){
                printf("Memori tidak dapat dialokasi menggunakan malloc");
        }else{
                strcpy(s, p);
                printf("String dari p adalah %s, alamat memori: %p\n" , s, &s);

                s = (char*) realloc(s, ((strlen(p)+10)));
                strcat(s, "memori");
                printf("String dari reallocation adalah %s, alamat memori: %p\n", s, &s);

        }

        free(s);

        return(0);

}
