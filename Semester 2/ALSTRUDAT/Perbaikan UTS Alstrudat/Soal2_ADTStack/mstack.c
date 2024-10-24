/*
    Nama        : Agus Pranata Marpaung
    NIM         : 13323033
    Nama program: mstack.c
*/

#include "stack.h"
#include <stdio.h>

int main() {
    Stack S;
    int size;
    infotype value;

    printf("Stack Size: ");
    scanf("%d", &size);

    CreateEmpty(&S, size);

    printf("Push Stack Value:\n");
    for (int i = 0; i < size; i++) {
        scanf("%ld", &value);
        Push(&S, value);
    }

    printf("\nStack Before Processing: ");
    Iterate(S);
    printf("TOP = %ld\n", S.T[S.TOP]);

    if (IsFull(S))
        printf("Status: Full\n");
    else if (!IsEmpty(S))
        printf("Status: Not Full & Not Empty\n");
    else
        printf("Status: Empty\n");

    printf("-------\n");

    // Processing
    infotype temp;
    for (int i = 0; i < 2; i++) {
        Pop(&S, &temp);
    }

    printf("Stack After Processing: ");
    Iterate(S);
    printf("TOP = %ld\n", S.T[S.TOP]);

    if (IsFull(S))
        printf("Status: Full\n");
    else if (!IsEmpty(S))
        printf("Status: Not Full & Not Empty\n");
    else
        printf("Status: Empty\n");

    DeAlokasi(&S);

    return 0;
}
