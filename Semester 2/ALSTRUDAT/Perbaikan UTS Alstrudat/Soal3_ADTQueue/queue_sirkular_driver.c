/*
    NIM             : 13323033
    Nama            : Agus Pranata Marpaung
    Nama Program    : queue_sirkular_driver.c
*/

#include "queue_sirkular.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    Queue Q;

    printf("N: ");
    scanf("%d", &n);
    CreateEmpty(&Q, n);

    long *T = (long *)malloc(n * sizeof(long));

    printf("QUEUE:\n");

    i = 0;
    do {
        scanf("%ld", &T[i]);
        if (T[i] == -99 || i >= n) {
            break;
        } else {
            Add(&Q, T[i]);
            i++;
        }
    } while (1);

    printf("\nQUEUE: ");
    if (!IsEmpty(Q)) {
        j = Q.Head;
        while (1) {
            printf("%ld ", Q.T[j]);
            if (j == Q.Tail) break;
            j = (j + 1) % Q.MaxEl;
        }
        printf("\n");
    }

    if (IsFull(Q)) {
        printf("STATUS: ANTRIAN ATM PENUH\n");
    } else if (!IsEmpty(Q)) {
        printf("STATUS: ANTRIAN ATM MASIH BISA DIISI\n");
    } else {
        printf("STATUS: ANTRIAN KOSONG\n");
    }

    printf("HEADER = %ld\n", Q.T[Q.Head]);
    printf("TAIL = %ld\n", Q.T[Q.Tail]);
    printf("SISA ANTRIAN = %d\n", (Q.MaxEl - (j - Q.Head + 1)) % Q.MaxEl);

    free(T);

    return 0;
}
