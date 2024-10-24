#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements;
    int *array;
    int max_value;

    printf("Masukkan jumlah total elemen array (antara 1 dan 20): ");
    scanf("%d", &num_elements);

    if (num_elements < 1 || num_elements > 20) {
        printf("Jumlah elemen tidak valid. Harus antara 1 dan 20.\n");
        return 1;
    }

    array = (int *)calloc(num_elements, sizeof(int));
    if (array == NULL) {
        printf("Gagal melakukan alokasi memori.\n");
        return 1;
    }

    printf("Masukkan %d nilai integer:\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        scanf("%d", &array[i]);
    }

    // Temukan nilai elemen terbesar
    max_value = array[0];
    for (int i = 1; i < num_elements; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }

    printf("Nilai elemen terbesar dalam array: %d\n", max_value);

    free(array);

    return 0;
}
