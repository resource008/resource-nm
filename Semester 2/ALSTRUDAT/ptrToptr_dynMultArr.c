#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, rows, cols;
    int **array = NULL; //array 2 dimensi menggunakan ptr tp ptr

    printf("Jumlah baris = ");
    scanf("%d",&rows); // Inputan jumlah baris
    printf("Jumlah kolom = ");
    scanf("%d",&cols); // Inputan jumlah kolom
    // alokasi memori 2 pointer dengan tipe int (alokasi baris)
    array = (int **) malloc (rows *sizeof (int *));
    if (array == NULL)
    {
        printf("Array memory array = null\n");
        exit (0);
    }
    for ( i = 0; i < rows; i++)
    {
        // alokasi memori untuk kolom dengan looping
        array[i] = (int *) malloc (cols *sizeof (int));
        if (array == NULL)
        {
            printf("Array memory array = null\n");
            exit (0);
        }
    }

    printf("\nElemen Matriks:\n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }

    return 0;

}