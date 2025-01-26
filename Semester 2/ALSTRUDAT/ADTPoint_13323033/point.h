/*
    Nama : Agus Pranata Marpaung
    NIM  : 13323033
    Prodi: D3 Teknologi Komputer
*/

/* Definisi Abstract Data Type*/

#ifndef POINT_H
#define POINT_H
#include "boolean.h"
typedef struct sPOINT{
 float X; /* absis */
 float Y; /* ordinat */
}POINT;
#define Absis(P) (P).X
#define Ordinat(P) (P).Y


POINT MakePOINT(float X, float Y);

void BacaPOINT (POINT * P);
void TulisPOINT (POINT P);
boolean EQ (POINT P1, POINT P2);
boolean NEQ (POINT P1, POINT P2);
boolean IsOrigin (POINT P);
boolean IsOnSbX (POINT P);
boolean IsOnSbY (POINT P);
int Kuadran (POINT P);

float Jarak (POINT P1, POINT P2);

void Geser (POINT *P, float deltaX, float deltaY);

void Mirror(POINT *P, boolean SbX);

void Putar (POINT *P, float Sudut);

#endif
