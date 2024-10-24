/*
    Nama    : Agus Pranata Marpaung
    NIM     : 13323033
    Kelas   : 31TK2
*/

#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int n, int isEven) {
    int i, key, j, pass = 0;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && ((isEven && arr[j] % 2 == 0 && key % 2 == 0) || (!isEven && arr[j] % 2 != 0 && key % 2 != 0)) && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        pass++;

        printf("Pass-%d: ", pass);
        printArray(arr, n);
    }
}

int main() {
    int array[100], even[100], odd[100], n, i, evenCount = 0, oddCount = 0;

    printf("Masukkan Jumlah Data Array: ");
    scanf("%d", &n);
    printf("Masukkan %d elemen pada Array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        if (array[i] >= 1 && array[i] <= 100) {
            if (array[i] % 2 == 0) {
                even[evenCount++] = array[i];
            } else {
                odd[oddCount++] = array[i];
            }
        }
    }

    printf("\n");
    printf("Data Array Genap Setelah Proses Insertion Sort:\n");
    insertionSort(even, evenCount, 1);

    printf("\n");
    printf("Data Array Ganjil Setelah Proses Insertion Sort:\n");
    insertionSort(odd, oddCount, 0);

    return 0;
}
