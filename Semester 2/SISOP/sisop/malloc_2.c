#include <stdio.h>
#include <stdlib.h>
int main(){
    int *x, num_element=4;
    
    x = malloc (num_element * sizeof(int));
    
    if(!x){
        perror ("Меmori tidak dapat dialokasikan menggunakan malloc");
    return -1;
    }else{
        printf("Memori dapat dialokasikan menggunakan malloc\n");

        for(int i=0; i<num_element; i++){
            x[i] = i + 1;
        }

        printf("Element: ");
        for(int i=0; i<num_element; i++){
            printf("%d ", x[i]);
        }
    }
    return 0;
}