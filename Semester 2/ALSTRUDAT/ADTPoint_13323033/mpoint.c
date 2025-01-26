/*
    Nama : Agus Pranata Marpaung
    NIM  : 13323033
    Prodi: D3 Teknologi Komputer
*/

#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include "boolean.h"

int main (){
    POINT P;
    POINT Q;
    
     //print titik 1
     printf ("Masukkan Titik 1 : ");
     BacaPOINT (&P);
    TulisPOINT (P);

    //print titik 2
    printf ("\nMasukkan Titik 2 : ");
    BacaPOINT (&Q);
    TulisPOINT(Q);

     //print kesamaan
     printf ("\nCek Apakah Titik 1 dan Titik 2 sama\n");
     if (EQ (P, Q)){
     printf ("Titik sama");
     } else if (!NEQ (P, Q)) {
     printf ("Titik sama");
     } else {
     printf ("Titik berbeda");
     }
    //print apakah titik 1 berada di titik 0,0
    printf ("\nCek Apakah Titik 1 berada di titik 0,0\n");
    if (IsOrigin (P)){
        printf ("Titik berada di titik 0,0");
    } else if (IsOnSbX (P)){
        printf ("Titik x berada di titik 0");
    } else if (IsOnSbY (P) ){
         printf ("Titik y berada di titik 0");
    } else {
        printf ("Titik tidak berada 0,0");
    }

    //print apakah titik 2 berada di titik 0,0
    printf ("\nCek Apakah Titik 2 berada di titik 0,0\n");
    if (IsOrigin (Q)){
        printf ("Titik berada di titik 0,0");
    } else if (IsOnSbX (Q)){
        printf ("Titik x berada di titik 0");
    } else if (IsOnSbY (Q) ){
        printf ("Titik y berada di titik 0");
    } else {
        printf ("Titik tidak berada 0,0");
    }
    
    //print jarak
    printf ("\nJarak titik = %.2f",Jarak(P, Q));

    //print titik kuadran
    printf ("\nTitik 1 berada di kuadran %d", Kuadran(P));
    printf ("\nTitik 2 berada di kuadran %d", Kuadran(Q));
    float sudut;

    //print sudut
    printf ("Masukkan sudut : ");
    scanf ("%f", &sudut);
    Putar (&P, sudut);
    Putar (&Q, sudut);

    TulisPOINT (P);
    TulisPOINT (Q);
    return 0;
}