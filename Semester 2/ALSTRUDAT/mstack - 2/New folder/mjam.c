/*
    Nama        : Agus Pranata Marpaung
    Nama Program: mjam.c
    Tanggal     : 19/02/2024
    NIM         : 13323033
*/

#include "jam.h"
#include <stdio.h>

int main() {
    JAM J1, J2;
    long detik;
    int N;
    
    printf("Masukkan JAM: ");
    BacaJAM(&J1);
    
    printf("\n");
    TulisJAM(J1);
    printf(" JAM ");
    printf("diubah ke detik = %ld detik\n\n", JAMToDetik(J1));
    
    printf("Masukkan Jumlah Detik: ");
    scanf("%ld", &detik);
    J2 = DetikToJAM(detik);
    TulisJAM(J2);
    printf("\n");
    
    printf("NextDetik dari ");
    TulisJAM(J1);
    printf(" adalah ");
    TulisJAM(NextDetik(J1));
    printf("\n");
    
    printf("PrevDetik dari ");
    TulisJAM(J1);
    printf(" adalah ");
    TulisJAM(PrevDetik(J1));
    printf("\n\n");
    
    printf("Masukkan N Detik: ");
    scanf("%d", &N);
    printf("Next %d Detik dari ", N);
    TulisJAM(J1);
    printf(" adalah ");
    TulisJAM(NextNDetik(J1, N));
    printf(" Prev %d Detik dari ", N);
    TulisJAM(J1);
    printf(" adalah ");
    TulisJAM(PrevNDetik(J1, N));
    printf("\n\n");
    
    printf("Masukkan Jam J1: ");
    BacaJAM(&J1);
    printf("Jam 1 adalah ");
    TulisJAM(J1);
    printf("\n");
    
    printf("Masukkan Jam J2: ");
    BacaJAM(&J2);
    printf("Jam adalah ");
    TulisJAM(J2);
    printf("\n");
    
    if (JEQ(J1, J2))
        printf("JAM J1 SAMA DENGAN JAM J2\n");
    else {
        printf("JAM J1 TIDAK SAMA DENGAN JAM J2\n");
        if (JLT(J1, J2))
            printf("JAM J1 LEBIH KECIL DARI JAM J2\n");
        else
            printf("JAM J1 LEBIH BESAR DARI JAM J2\n");
        printf("Durasi antara JAM J1 dan JAM J2 adalah %ld detik atau ", Durasi(J1, J2));
        TulisJAM(DetikToJAM(Durasi(J1, J2)));
        printf("\n");
    }
    
    return 0;
}
