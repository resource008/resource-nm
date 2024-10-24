/* Nama         : Agus Pranata Marpaung */
/* NIM          : 13323033 */
/* File         : mpoint.c */
/* Tanggal      : 6 Februari 2024 */

#include <stdio.h>
#include <math.h>
#include "point.h"

int main() {

    POINT P, P1, P2;
    // Pengujian BacaPOINT dan TulisPOINT P, P1 dan P2
    printf("Enter X and Y on POINT : ");
    BacaPOINT(&P);
    printf("POINT P: ");
    TulisPOINT(P);
    printf("\n");
    printf("Enter X and Y on POINT 1: ");
    BacaPOINT(&P1);
    printf("POINT P1: ");
    TulisPOINT(P1);
    printf("\n");
    printf("Enter X and Y on POINT 2: ");
    BacaPOINT(&P2);
    printf("\n");
    printf("POINT P2: ");
    TulisPOINT(P2);
    printf("\n\n");

    // Pengujian fungsi EQ apakah dua POINT berada pada titik yang sama atau tidak
    if (EQ(P1, P2) == 1 )
    {
        printf("POINT P1 equals POINT P2\n");
    }
    else
    {
        printf("POINT P1 not equals POINT P2\n");
    }

    // Pengujian fungsi IsOrigin apakah POINT berada pada titik (0,0)
    if (IsOrigin(P) == 1)
    {
        printf("POINT P is Origin (Center Point)\n");
    }
    else
    {
        printf("POINT P is Not Origin (Center Point)\n");
    }

    /* Pengujian Fungsi IsOnSbX, IsOnSbY apakah POINT berada pada sumbu X, Y atau tidak pada keduanya*/
    if (IsOnSbX(P) == 1)
    {
        printf("POINT P is on X Axis\n");
    }
    else if (IsOnSbY(P) == 1)
    {
        printf("POINT P is on Y Axis\n");
    }
    else
    {
        printf("POINT P is not on X and Y Axis\n");
    }

    // Pengujian fungsi kuadran untuk menunjukkan POINT berada pada kuadran berapa
    if (Kuadran(P) == 0)
    {
        printf("POINT P is not on Kuadran\n");
    }
    else
    {
        printf("POINT P is on Kuadran %d\n", Kuadran(P));
    }

    return 0;
}

