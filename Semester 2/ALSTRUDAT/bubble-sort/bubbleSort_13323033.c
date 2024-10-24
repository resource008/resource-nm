/*
    NIM             : 13323033
    Nama            : Agus Pranata Marpaung
    Nama Program    : bubbleSort_13323033.c
*/

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int Array[], int N){
    int i,j,temp,k;
    for(i = 0; i < N-1; i++){
        for(j = 0; j < N-i; j++){
            if (Array[j] > Array[j+1])
            {
                temp = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = temp;
            }
        }
    }
}

void inputArray(int Array[], int N){
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &Array[i]);
    }
}

void printArray(int Array[], int N){
    int i;

    for (i = 0; i < N; i++)
    {
        printf("%d ", Array[i]);
    }
    printf("\n");
}

int main(){
    int Array[100];
    int i,N;

    printf("Enter Number of Array: ");
    scanf("%d",&N);
    printf("Enter %d Element Array: ",N);
    inputArray(Array,N);
    printf("Original Sequence: ");
    printArray(Array,N);

    printf("Sorted using Bubble Sort: ");
    bubbleSort(Array,N);
    printArray(Array,N);
}