/*
    Nama : Agus Pranata Marpaung
    NIM  : 13323033
    Prodi: D3 Teknologi Komputer
*/

#include "stacklist.h"
#include <stdio.h>

int main() {
    StackList S;
    Infotype inputItem, poppedItem;
    char choice;
    int count;

    CreateEmptyStack(&S);

    do {
        printf("Menu:\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. Exit\n");
        printf("Pilih: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("Masukkan jumlah item yang akan di PUSH: ");
                scanf("%d", &count);
                printf("Masukkan %d nilai untuk di PUSH:\n", count);
                for (int i = 0; i < count; ++i) {
                    scanf("%d", &inputItem);
                    Push(&S, inputItem);
                }
                break;
            case '2':
                printf("Masukkan jumlah item yang akan di POP: ");
                scanf("%d", &count);
                printf("Item yang telah di POP: ");
                for (int i = 0; i < count; ++i) {
                    if (!IsStackEmpty(S)) {
                        Pop(&S, &poppedItem);
                        printf("%d ", poppedItem);
                    } else {
                        printf("Tumpukan kosong.\n");
                        break;
                    }
                }
                printf("\n");
                break;
            case '3':
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan salah. Silakan coba lagi.\n");
        }
        
        // Menampilkan sisa nilai pada stack tanpa benar-benar melakukan POP
        if (!IsStackEmpty(S)) {
            printf("Sisa nilai pada stack: ");
            address P = Top(S);
            while (P != NULL) {
                printf("%d ", Info(P));
                P = Next(P);
            }
            printf("\n");
        } else {
            printf("Stack kosong.\n");
        }
        
    } while (choice != '3');

    return 0;
}