/* 
    NIM         : 13323033
    Nama        : Agus Pranata Marpaung
    Nama Program: Pointer to Array of Char
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, cols;
    int *array = NULL; // Deklarasi array sebagai pointer tipe int
    //print alamat yang ditunjuk *array sebelum alokasi
    printf ("Alamat yang ditunjuk array = %p\n\n", array);

    printf ("Jumlah kolom array = ");
    scanf ("%d", &cols);
    array = (int *) malloc (cols *sizeof (int));
    //print alamat yag ditunjuk *array setelah lokasi 
    printf ("\nAlamat yang ditunjuk array = %p\n\n", array);
    if (array == NULL)
    {
        printf("Array buffer is null");
        exit(0);
    }
    for ( i = 0; i < cols; i++)
    {
        array[i] = i*10;
    }

    for ( i = 0; i < cols; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }

    return 0;
}