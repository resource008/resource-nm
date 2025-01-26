/*
    Nama        : Agus Pranata Marpaung
    NIM         : 13323033
    Nama program: room.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "room.h"

ROOM MakeROOM(int id, char *a, float b, float c, int d) {
    ROOM R;
    R.kode = id;
    R.name = malloc(sizeof(char) * (strlen(a) + 1));
    strcpy(R.name, a);
    R.panjang = b;
    R.lebar = c;
    R.kapasitas = d;
    return R;
}

void BacaROOM(ROOM *R) {
    char temp[100];
    int kode;
    float panjang;

    do {
        printf("Masukkan kode ruangan (bilangan bulat positif): ");
        scanf("%d", &kode);
        getchar();
    } while (kode <= 0);
    R->kode = kode;

    printf("Masukkan nama ruangan: ");
    scanf("%s", temp);
    
    R->name = malloc(sizeof(char) * (strlen(temp) + 1));
    strcpy(R->name, temp);

    do {
        printf("Masukkan panjang ruangan (bilangan bulat positif): ");
        scanf("%f", &panjang); 
    } while (panjang <= 0);
    R->panjang = panjang;

    do {
        printf("Masukkan lebar ruangan (bilangan bulat positif): ");
        scanf("%f", &R->lebar);
    } while (R->lebar <= 0);
    
    do {
        printf("Masukkan kapasitas ruangan (bilangan bulat positif): ");
        scanf("%d", &R->kapasitas);
    } while (R->kapasitas <= 0);
}

void TulisROOM(ROOM *R) {
    printf("Kode Ruangan : %d\n", R->kode);
    printf("Deskripsi : Ruangan %s dengan Luas %.0f cm dan memiliki kapasitas %d orang\n", R->name, (R->panjang * R->lebar), R->kapasitas);
}
