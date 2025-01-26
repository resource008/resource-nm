/*
    Nama        : Agus Pranata Marpaung
    NIM         : 13323033
    Nama program: stack.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void CreateEmpty(Stack *S)
{
    S->TOP = Nil;
}

boolean IsEmpty (Stack S)
{
    return (S.TOP==Nil);
}

boolean IsFull(Stack S)
{
    return(S.TOP==MaxEl);
}

void Push (Stack *S, infotype X)
{
    if(!IsEmpty(*S)){
        S->TOP++;
    } else {
        S->TOP = 0;
    }
        S->T[S->TOP] = X;
}
void Pop (Stack *S, infotype *X)
{
    *X = S->T[S->TOP];
    if(S->TOP == 0){
        S->TOP = Nil;
    } else {
        S->TOP--;
    }
}