/*
    Nama        : Agus Pranata Marpaung
    NIM         : 13323033
    Nama program: stack.h
*/

#ifndef _STACK_H
#define _STACK_H

#define boolean unsigned char
#define true 1
#define false 0
#define Nil -99
/* Nil adalah konstanta indeks tak terdefinisi */
typedef long infotype;
typedef int address;    /* indeks tabel */
/* Contoh deklarasi variabel bertype stack dengan ciri TOP: */
/* Versi I : dengan menyimpan tabel dan alamat top secara eksplisit */
typedef struct _stack{
    infotype * T;   /* tabel penyimpan elemen */
    address TOP;    /* alamat TOP: elemen puncak */
    int MaxEl;      /* ukuran tabel penyimpanan elemen */
} Stack;
/* *********** Prototype ************ */
/* ****** Konstruktor / Kreator ***** */

void CreateEmpty (Stack *S, int MaxEl);
/* I.S. S sembarang, size terdefinisi 
    F.S. Membuat sebuah stack S yang kosong berkapasitas MaxEl.
    Tabel container stack dari indeks 0..MaxEl-1.*/
/* Ciri stack kosong : TOP berniali Nil */
/* *** Destruktor *** */
void DeAlokasi (Stack *S);
/* 
    Proses : Mengembalikan memori S
    I.S. S pernah dialokasi
    F.S. S menjadi tidak terdefinisi lagi, MaxE(S) diset 0 
*/
/* ******* Predikat untuk test keadaan koleksi ********** */
boolean IsEmpty (Stack S);
/* Mengirim true jika stack kosong: lihat definisi di atas */
boolean IsFull (Stack S);
/* Mengirim true jika tabel penampung nilai elemen stack penuh */
/* ********* Menambahkan sebuah elemen ke stack ********** */
void Push (Stack * S, infotype X);
/* 
    Menambahkan X sebagai elemen Stack S.
    I.S. S mungkin kosong, tabel penampung elemen stack TIDAK penuh 
    F.S. X menjadi TOP yang baru, TOP bertambah 1 
*/
void Pop (Stack * S, infotype * X);
/* 
    Menghapus X dari stack S.
    I.S. S tidak mungkin kosong 
    F.S. X adalah nilai elemen TOP yang lama, TOP berkurang 1 
*/
void Iterate (Stack S);
/* 
    Menuliskan isi S dari Top ke 0 
    Tidak menuliskan apa pun jika S kosong 
    I.S.: S terdefinisi
    F.S. Isi S tertulis ke layar dari Top ke 0.
    Setiap elemen dituliskan sebagai satu baris 
    dan dipisahkan dengan spasi dan diakhiri sebuah enter
    Contoh : 10 15 17 20
     */
#endif