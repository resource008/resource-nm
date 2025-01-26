/*
    Nama        : Agus Pranata Marpaung
    NIM         : 13323033
    Nama program: mstack.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    //Variabel
    Stack S;
    int i,j;
    int N,pop,index;
    infotype T[100]; // Mengubah tipe array T menjadi infotype dan menetapkan ukuran maksimum yang lebih besar
    //algoritma

    printf("Masukkan size stack: ");
    scanf("%d", &N); // Meminta panjang elemen stack dari pengguna
    CreateEmpty(&S, N); // Menggunakan panjang elemen yang dimasukkan oleh pengguna saat membuat stack
    printf("Masukkan nilai stack dengan maksimum 5 elemen dan tidak boleh Angka -99, jika nilai -99 atau sudah melebihi batas maksimum elemen, Maka nilai tidak dimasukkan ke dalam stack\n");
    printf("Push Nilai Elemen Stack : \n");
    i = 0;
    do{
        scanf("%ld", &T[i]); // Mengubah format input menjadi %ld untuk tipe infotype
        if(T[i] == -99 || i >= N){ // Mengubah kondisi untuk berhenti jika -99 dimasukkan atau jika i melebihi N
            break;
        }else{
            Push(&S, T[i]);
            i++;
        }
    }while(i < N); // Mengubah kondisi untuk berhenti setelah N elemen dimasukkan

    printf("\nIsi Stack : ");
    Iterate(S); // Menggunakan fungsi Iterate dari header untuk menampilkan isi stack

    printf("\nNilai Top = %ld\n", S.T[S.TOP]); // Menggunakan %ld untuk menampilkan nilai infotype

    if(IsFull(S) == true){ // Menggunakan true dan false dari header
        printf("Status Stack : Full");
    }
    else if(IsEmpty(S) == true){ // Menggunakan true dan false dari header
        printf("Status Stack : Empty");
    }
    else{
        printf("Status stack : Not Full & Not Empty");
    }

    printf("\n\nMasukkan Jumlah Elemen Yang Akan Dihapus ( Pop ) : ");
    scanf("%d", &pop);

    for ( i = 0; i < pop && !IsEmpty(S); i++) // Menambahkan kondisi agar loop berhenti jika stack kosong
    {
        infotype x; // Mengubah tipe variabel x menjadi infotype
        Pop(&S, &x); // Mengirimkan alamat variabel x
    }

    printf("\nIsi Stack : ");
    Iterate(S); // Menggunakan fungsi Iterate dari header untuk menampilkan isi stack

    if (!IsEmpty(S)) { // Menambahkan kondisi agar nilai top hanya ditampilkan jika stack tidak kosong
        printf("\nNilai Top = %ld\n", S.T[S.TOP]); // Menggunakan %ld untuk menampilkan nilai infotype
    }
    
    DeAlokasi(&S); // Melakukan dealokasi memori saat stack tidak diperlukan lagi
}
