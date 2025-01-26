/*
    Nama : Agus Pranata Marpaung
    NIM  : 13323033
    Prodi: D3 Teknologi Komputer
*/

/* File: point.c */
/* Definisi ADT Point */

#define PI 3.14159265
#include <stdio.h>
#include <math.h>
#include "point.h"
POINT MakePOINT (float X, float Y){
    POINT P;
    Absis(P)=X;
    Ordinat(P)=Y;
    return P;
}

void BacaPOINT (POINT * P){
    float X,Y;
    scanf("%f %f", &X, &Y);
    *P = MakePOINT(X,Y);
}
void TulisPOINT (POINT P){
    printf("(%.2f,%.2f)", Absis(P), Ordinat(P));   
}
boolean EQ (POINT P1, POINT P2){
    return (Absis(P1)==Absis(P2)) && (Ordinat(P1)==Ordinat(P2));
}
boolean NEQ (POINT P1, POINT P2){
    return (!EQ(P1,P2));
}
boolean IsOrigin (POINT P){
    return EQ(P,MakePOINT(0,0));
}
boolean IsOnSbX (POINT P){
    return (Ordinat(P)==0);
    }
boolean IsOnSbY (POINT P){
    return (Absis(P)==0);
}
int Kuadran (POINT P){
    if ((Absis(P)>0) && (Ordinat(P)>0)) {
    return 1;
    } else if ((Absis(P)<0) && (Ordinat(P)>0)) {
    return 2;
    } else if ((Absis(P)<0) && (Ordinat(P)<0)) {
    return 3;
    } else if ((Absis(P)>0) && (Ordinat(P)<0)) {
    return 4;
    } else {
    return 0;
    }
}
float Jarak (POINT P1, POINT P2){
    return sqrt(pow(Absis(P1)-Absis(P2),2)+pow(Ordinat(P1)-Ordinat(P2),2));
}
void Geser (POINT *P, float deltaX, float deltaY){
	Absis(*P) += deltaX;
	Ordinat(*P) += deltaY;

}
void Mirror (POINT *P, boolean SbX){
if (SbX==true) {
		Ordinat(*P) = -Ordinat(*P);
	} else {
		Absis(*P) = -Absis(*P);
	}
}
void Putar (POINT *P, float Sudut){
    float X = Absis(*P);
    float Y = Ordinat(*P);
    Absis(*P)=X*cos((-1)*Sudut*PI/180)-Y*sin((-1)*Sudut*PI/180);
    Ordinat(*P)=X*sin((-1)*Sudut*PI/180)+Y*cos((-1)*Sudut*PI/180);
}
