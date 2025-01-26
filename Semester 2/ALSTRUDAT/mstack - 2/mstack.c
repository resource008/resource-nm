/*
    Nama        : Agus Pranata Marpaung
    NIM         : 13323033
    Nama program: mstack.c
*/


#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    //Variabel 
    Stack S;
    int i,j;
    int N,pop,index;
    int T[10];
    //Algoritma
    CreateEmpty(&S);
    printf("Push Nilai Elemen Stack :\n");
    i = 0;
    do{
        scanf("%d",&T[i]);
        if(T[i] == -99){
            system("exit");
        }else{
            Push(&S,T[i]);
            i++;
        }

    }while(i<10 && T[i] !=-99);

    printf("\nIsi Stack : ");
    for (i = S.TOP; i>=0; i--)
    {
        printf("%d", S.T[i]);
    }

    printf("\nNilai Top = %d\n", S.T[S.TOP]);
    if (IsFull(S) == 1){
        printf("Status Stack: Full");
    }
    else if(IsEmpty(S) == 1){
        printf("Status Stack: Empty");
    }
    else{
        printf("Status Stack: Not Full & Not Empty");
    }

    printf("\n\nMasukkan Jumlah Elemen yang akan dihapus (Pop): ");
    scanf("%d",&pop);

    for (i = 0; i < pop; i++)
    {
        int x = S.T[i];
        Pop(&S,&x);
    }

    printf("\nIsi Stack : ");
    for (i = S.TOP; i >=0; i--)
    {
        printf("%ld ", S.T[i]);
    }
    printf("\nNilai Top = %d\n",S.T[S.TOP]);
}