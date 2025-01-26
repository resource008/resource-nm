/*
    Nama        : Agus Pranata Marpaung
    NIM         : 13323033
    Nama program: stack.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void CreateEmpty (Stack *S, int MaxEl){
    S->T = (infotype*) malloc (MaxEl*sizeof(infotype));
    S->MaxEl = MaxEl;
    S->TOP = Nil;
}

void DeAlokasi (Stack *S){
    free(S->T);
    S->MaxEl = 0;
}

boolean IsEmpty (Stack S){
    if(S.TOP == Nil || S.MaxEl == 0){
        return true;
    } else {
        return false;
    }
}

boolean IsFull (Stack S){
    if(S.TOP == S.MaxEl-1){
        return true;
    } else {
        return false;
    }
}

void Push (Stack * S, infotype X){
    if(!IsEmpty(*S)){
        S->TOP++;
    } else {
        S->TOP = 0;
    }
    S->T[S->TOP] = X;
}

void Pop (Stack * S, infotype * X){
    *X = S->T[S->TOP];
    if(S->TOP == 0){
        S->TOP = Nil;
    }else {
        S->TOP--;
    }
}

void Iterate (Stack S){
    int i;
    if (!IsEmpty(S))
    {
        for (i = S.TOP; i >=0; i--)
        {
            printf("%ld", S.T[i]);
        }
    }
    printf("\n");
}
