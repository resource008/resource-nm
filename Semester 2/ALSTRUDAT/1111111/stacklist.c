/*
    Nama : Agus Pranata Marpaung
    NIM  : 13323033
    Prodi: D3 Teknologi Komputer
*/

#include "stacklist.h"
#include <stdlib.h>

address Alokasi(Infotype X) {
    address P = (address)malloc(sizeof(ElmtList));
    if (P != NULL) {
        Info(P) = X;
        Next(P) = NULL;
        return P;
    } else {
        return NULL;
    }
}

void CreateEmptyStack(StackList *S) {
    Top(*S) = NULL;
    Count(*S) = 0;
}

void Destroy(StackList *S) {
    address P = Top(*S);
    address Temp;
    while (P != NULL) {
        Temp = P;
        P = Next(P);
        free(Temp);
    }
    CreateEmptyStack(S); // Set stack kosong setelah di-deallocate
}

boolean IsStackEmpty(StackList S) {
    return Top(S) == NULL;
}

void Push(StackList *S, Infotype v) {
    address P = Alokasi(v);
    if (P != NULL) {
        Next(P) = Top(*S);
        Top(*S) = P;
        Count(*S)++;
    }
}

void Pop(StackList *S, Infotype *v) {
    if (!IsStackEmpty(*S)) {
        address P = Top(*S);
        *v = Info(P);
        Top(*S) = Next(P);
        free(P);
        Count(*S)--;
    }
}

