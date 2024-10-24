/* Nama         : Agus Pranata Marpaung */
/* NIM          : 13323033 */
/* File         : point.h */
/* Tanggal      : 6 Februari 2024*/

/* *** Definisi ABSTRACT DATA TYPE POINT *** */
#ifndef POINT_H
#define POINT_H

#define boolean unsigned char
#define true 1
#define false 0

typedef struct _point{
    float X; /* absis */
    float Y; /* ordinat */
} POINT;

/* *** Notasi Akses: Selektor POINT *** */
#define Absis(P) (P).X
#define Ordinat(P) (P).Y

/* *** DEFINISI PROTOTIPE PRIMITIF *** */
/* *** Konstruktor membentuk POINT *** */
POINT MakePOINT (float X, float Y);
/* Membentuk sebuah POINT dari komponen-komponennya */

/* *** KELOMPOK Interaksi dengan I/O device, BACA/TULIS *** */
void BacaPOINT (POINT * P);
/* Membaca nilai absis dan ordinat dari keyboard dan membentuk 
POINT P berdqsarkan dari nilai absis dan ordinat tersebut */
/* Komponen X dan Y dibacaa dalam satu baris, dipisahkan 1 buah spasi */
/* Contoh: 1 2
    akan membentuk POINT <1,2> */
/* I.S. Sembarang */
/* F.S. P terdefinisi */
void TulisPOINT (POINT P);
/* Nilai P ditulis ke layar dengan format "(X,Y)"
    tanpa spasi, enter, atau karakter lain di depan, belakang,
    atau di antaranya. Bilangan rill ditulis dengan 2 digit di belakang koma /*
/* I.S. P terdefinisi */
/* F.S. P tertulis di layar dengan format "(X,Y)" */

/* *** Kelompok operasi relasional terhadap POINT *** */
boolean EQ (POINT P1, POINT P2);
/* Mengirimkan true jika P1 = P2: absis dan ordinatnya sama */
boolean NEW (POINT P1, POINT P2);
/* Mengirimkan true jika P1 tidak sama dengan P2 */

/* *** Kelompok menentukan di mana P berada *** */
boolean IsOrigin (POINT P);
/* Menghasilkan true jika P adalah titik origin */
boolean IsOnSbX (POINT P);
/* Menghasilkan true jika P terletak pada sumbu X*/
boolean IsOnSbX (POINT P);
/* Menghasilkan true jika P terletak pada sumbu X*/

/* Menghasillkan kuadran dari P: 1, 2, 3, atau 4 */
/* Prekondisi : P bukan dari titik origin
/* dan P tidak terletak di salah satu sumbu */
#endif