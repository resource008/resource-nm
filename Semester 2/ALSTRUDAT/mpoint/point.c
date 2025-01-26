/* Nama         : Agus Pranata Marpaung */
/* NIM          : 13323033 */
/* File         : point.c */
/* Tanggal      : 6 Februari 2024 */

#include <stdio.h>
#include <math.h>
#include "point.h"

POINT MakePOINT (float X, float Y){
    POINT P;
    P.X=X;
    P.Y=Y;
    return P;
}

void BacaPOINT (POINT * P){
    float X,Y;
    scanf("%f %f", &X, &Y);
    *P = MakePOINT(X,Y);
}
void TulisPOINT (POINT P){
    printf("(%.2f,%.2f)", P.X, P.Y);
}

boolean EQ (POINT P1, POINT P2){
    return (P1.X==P2.X) && (P1.Y==P2.Y);
}
boolean NEQ (POINT P1, POINT P2){
    return (P1.X!=P2.X) && (P1.Y!=P2.Y);
}
boolean IsOrigin (POINT P){
    return (P.X==0) && (P.Y==0);
}

boolean IsOnSbX (POINT P){
    return (P.Y==0);
}

boolean IsOnSbY (POINT P){
    return (P.X==0);
}

int Kuadran (POINT P){
    if ((P.X>0) && (P.Y>0)) {
        return 1;
    } else if ((P.X<0) && (P.Y>0)) {
        return 2;
    } else if ((P.X<0) && (P.Y<0)) {
        return 3;
    } else if ((P.X>0) && (P.Y<0)) {
        return 4;
    } else {
        return 0;
    }
}