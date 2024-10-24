/*
    Nama : Agus Pranata Marpaung
    NIM  : 13323033
    Prodi: D3 Teknologi Komputer
*/

#define Nil NULL
#define Top(S) (S).Top
#define Count(S) (S).count
#define Info(P) (P)->Info
#define Next(P) (P)->Next
#include "boolean.h"

typedef int Infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist
{
    Infotype Info;
    address Next;
} ElmtList;

typedef struct
{
    address Top;
    int count;
} StackList;

address Alokasi(Infotype X);
/* Mengirim true jika stack penuh dan false jika tidak penuh */

void CreateEmptyStack(StackList *S);
/* Membuat sebuah stack kosong */

void Destroy(StackList *S);
/* Setiap alamat elemen stack didealokasi, dikembalikan ke sistem */

boolean IsStackEmpty(StackList S);
/* Mengirim true jika stack kosong dan false jika tidak kosong */

void Push(StackList *S, Infotype v);
/* Prekondisi: stack tidak penuh */
/* Menambahkan sebuah elemen v sebagai TOP. TOP berubah nilainya */

void Pop(StackList *S, Infotype *v);
/* Prekondisi: stack tidak kosong */