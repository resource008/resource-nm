#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_values;
    int *values;
    int sum = 0;

    printf("Masukkan jumlah angka (antara 1 dan 10): ");
    scanf("%d", &num_values);

    if (num_values < 1 || num_values > 10) {
        printf("Jumlah angka tidak valid. Harus antara 1 dan 10.\n");
        return 1;
    }

    values = (int *)malloc(num_values * sizeof(int));
    if (values == NULL) {
        printf("Gagal melakukan alokasi memori.\n");
        return 1;
    }

    printf("Masukkan %d nilai integer:\n", num_values);
    for (int i = 0; i < num_values; i++) {
        scanf("%d", &values[i]);
        sum += values[i];
    }

    printf("Hasil penjumlahan: %d\n", sum);

    free(values);

    return 0;
}
