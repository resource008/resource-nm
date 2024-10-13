/*
    NIM             : 13323033
    Nama            : Agus Pranata Marpaung
    Nama Program    : queue_sirkular.h
*/

#ifndef _QUEUE_H
#define _QUEUE_H

#define boolean usigned char
#define true 1
#define false 0
/* kostanta */
#define NIL -99
/* Nil adalah indeks tak terdefinisi */

/* Versi I : tabel dinamik, Head dan Tail eksplisit, ukuran disimpan */
typedef struct {
    long * T; /* tabel penyimpanan elemen */
    int Head; /* alamat penghapus */
    int Tail; /* alamat penambah */
    int MaxEl; /* Max elemen queue */
} Queue;
/* Defini Queue kosong: HEAD =Nil; TAIL=Nil. */
/* Definisi container tabel Queue dari indeks 0..MaxEl */

/* ********* Prototype ********* */
/* *** Kreator *** */
void CreateEmpty (Queue * Q,  int Max);
/* I.S. sembarang */
/* F.S.  Sebuah Q kosong terbentuk dan salah satu kondisi sbb: */
/* Jika alokai berhasil, Tabel memori dialokasi berukuran Max */
/* atau : Jika alokasi gagal, Q kosong dg MaxEl */
/*Proses: Melakukan alokasi, membuat sebuah Q kosong */
/* *** Predikat Penting ***  */
int IsEmpty (Queue Q);
/* Mengirim true jika Q kosing: lihat definisi di atas */
int IsFull (Queue Q);
/* Mengirim true jika tabel penampung elemen Q sudah penuh */
/* yaitu mengandung elemen sebanyak MaxEl */

/* *** Primitif Add/Delete *** */
void Add (Queue * Q, long X);
/* Proses: Menambahkan X pada Q dengan aturan FIFO */
/* I.S. Q mungkin kosong, tabel penampung elemen Q TIDAK penuh */
/* F.S. X menjadi TAIL yang baru, TAIL "maju" */
/* Jika Tail(Q)=MaxEl maka Tail(Q) diset ke-0 */
void Del (Queue * Q, long * X);
/* Proses: Menghapus X pada Q dengan aturan FIFO */
/* I.S. Q tidak mungin kosong */
/* F.S/ X = nilai elemen HEAD pd I.S.,HEAD "maju";
        Q mungkin kosong */

#endif 