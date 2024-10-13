/*
    NIM             : 13323033
    Nama            : Agus Pranata Marpaung
    Nama Program    : queue_sirkular.c
*/

#include "queue_sirkular.h"
#include <stdio.h>
#include <stdlib.h>

void CreateEmpty(Queue *Q, int Max) {
    Q->T = (long *)malloc(Max * sizeof(long));
    if (Q->T != NULL) {
        Q->Head = NIL;
        Q->Tail = NIL;
        Q->MaxEl = Max;
    } else {
        Q->MaxEl = 0;
    }
}

void DeAlokasi(Queue *Q) {
    Q->Head = NIL;
    Q->Tail = NIL;
    Q->MaxEl = 0;
    free(Q->T);
}

int IsEmpty(Queue Q) {
    return (Q.Head == NIL && Q.Tail == NIL);
}

int IsFull(Queue Q) {
    return ((Q.Tail + 1) % Q.MaxEl == Q.Head);
}

void Add(Queue *Q, long X) {
    if (!IsFull(*Q) && X != -99) {
        if (IsEmpty(*Q)) {
            Q->Head = 0;
            Q->Tail = 0;
        } else {
            Q->Tail = (Q->Tail + 1) % Q->MaxEl;
        }
        Q->T[Q->Tail] = X;
    } else {
        printf("Queue Full atau Nilai -99, Tidak Bisa Melakukan Proses Penambahan Elemen\n");
    }
}

void Del(Queue *Q, long *X) {
    if (!IsEmpty(*Q)) {
        *X = Q->T[Q->Head];
        if (Q->Head == Q->Tail) { 
            Q->Head = NIL;
            Q->Tail = NIL;
        } else {
            Q->Head = (Q->Head + 1) % Q->MaxEl;
        }
    } else {
        printf("Antrian Kosong, Proses Penghapusan Gagal\n");
    }
}
