/*
    Nama        : Agus Pranata Marpaung
    NIM         : 13323033
    Nama program: mroom.c
*/

#include <stdio.h>
#include "room.h"

int main() {
    ROOM R;
    printf("==== Masukkan informasi ruangan ====\n");
    BacaROOM(&R);
    printf("\n ==== Informasi ruangan yang dimasukkan ====\n");
    TulisROOM(&R);
    return 0;
}
