/*
    Nama        : Agus Pranata Marpaung
    NIM         : 13323033
    Nama program: stack.h
*/

#ifndef STACK_H
#define STACK_H

#define boolean unsigned char
#define true 1
#define false 0
#define Nil -99 /* Nil adalah stack dengan elemen kosong */
#define MaxEl 10
typedef int infotype;
typedef int address;    /* indeks tabel */

/* Versi 1 : dengan menyimpan tabel dan alamat top secara eksplisit */
typedef struct {
    infotype T[MaxEl]; /* tabel penyimpan elemen */
    address TOP; /* alamat TOP: elemen puncak */
} Stack;
/*** Konstruktor/Kreator ***/
void CreateEmpty(Stack *S);
/* I.S. Sembarang */
/* F.S. Membuat sebuah stack S yang kosong berkapasitas MaxEl */
/* jadi indeksnya antara 1..MaxEl karena 0 tidak dipakai */
/* Ciri stack kosong : TIO bernilai Nil */
/******** Predikat untuk test keadaan koleksi **********/
boolean IsEmpty (Stack S);
/* Mengirim true jika tabel penampung nilai elemen stack penuh */
boolean IsFull (Stack S);
/* Mengirim true jika tabel penampung nilai elemen stack penuh */
/******** Menambahkan sebuah elemem ke stack ***********/
void Push (Stack *S, infotype X);
/* Menambahkan X sebagai elemen Stack S. */
/* I.S. S mungkin kosong, tabel penampunh elemen stack Tidak penuh */
/* F.S. X menjadi TOP yang baru, TOP bertambah 1 */
/******** Menghapus sebuah elemen Stack ***********/
void Pop (Stack *S, infotype *X);
/* Menghapus X dari Stack S. */
/* I.S. S tidak mungkin kosong */
/* F.S. X adalah nilai elemen TOP yang lama, TOP berkurang 1 */
#endif