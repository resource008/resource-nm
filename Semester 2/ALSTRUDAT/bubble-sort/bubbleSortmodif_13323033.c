/*
    NIM             : 13323033
    Nama            : Agus Pranata Marpaung
    Nama Program    : bubbleSortmodif_13323033.c
*/

#include <stdio.h>
#include <stdlib.h>

void printArray(int Array[], int N) {
    int i;

    for (i = 0; i < N; i++) {
        printf("%d ", Array[i]);
    }
}

void bubbleSort(int Array[], int N) {
    int i, j, temp;
    int passLimit = N - 1;

    for (i = 0; i < passLimit; i++) {
        int isSorted = 1;

        for (j = 0; j < N - i - 1; j++) {
            if (Array[j] > Array[j + 1]) {
                temp = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = temp;
                isSorted = 0;
            }
        }

        printf("\nPass-%d:\t", i + 1);
        printArray(Array, N);

        if (isSorted) {
            break;
        }

        if (N == 5 && i == 3) {
            passLimit = 3;
        } else if (N == 4 && i == 2) {
            passLimit = 2;
        } else if (N == 3 && i == 1) {
            passLimit = 1;
        }
    }
}

void inputArray(int Array[], int N) {
    int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &Array[i]);
    }
}

int main() {
    int Array[100];
    int i, N;

    printf("Enter Number of Array: ");
    scanf("%d", &N);
    printf("Enter %d Element Array: ", N);
    inputArray(Array, N);
    printf("Original Sequence: ");
    printArray(Array, N);

    printf("\nSorted using Bubble Sort: ");
    bubbleSort(Array, N);
}
