/*
16-) Write C code that creates a 2x3 matrix and prints the largest numbers in each row and column to the screen;
*/
#include <stdio.h>
int main() 
{
    int matrix[2][3];
    int row_max[2], col_max[3];
    printf("Enter the elements of the 2x3 matrix:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) 
    {
        row_max[i] = matrix[i][0];
        for (int j = 1; j < 3; j++) 
        {
            if (matrix[i][j] > row_max[i]) 
            {
                row_max[i] = matrix[i][j];
            }
        }
    }
    for (int j = 0; j < 3; j++) 
    {
        col_max[j] = matrix[0][j];
        for (int i = 1; i < 2; i++) 
        {
            if (matrix[i][j] > col_max[j]) 
            {
                col_max[j] = matrix[i][j];
            }
        }
    }
    printf("\nLargest elements of the rows:\n");
    for (int i = 0; i < 2; i++) 
    {
        printf("Largest element of row %d: %d\n", i, row_max[i]);
    }
    printf("\nLargest elements of the columns:\n");
    for (int j = 0; j < 3; j++) 
    {
        printf("Largest element of column %d: %d\n", j, col_max[j]);
    }
    return 0;
}
#include <stdio.h>
int main() 
{
    int dizi[2][3];
    int satir_max[2], sutun_max[3];
    int i, j;
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("dizi[%d][%d]= ", i, j);
            scanf("%d", &dizi[i][j]);
        }
    }
    for (i = 0; i < 2; i++) 
    {
        satir_max[i] = dizi[i][0]; 
        for (j = 1; j < 3; j++) 
        {
            if (dizi[i][j] > satir_max[i]) 
            {
                satir_max[i] = dizi[i][j];
            }
        }
    }
    for (j = 0; j < 3; j++) 
    {
        sutun_max[j] = dizi[0][j]; 
        for (i = 1; i < 2; i++) 
        {
            if (dizi[i][j] > sutun_max[j]) 
            {
                sutun_max[j] = dizi[i][j];
            }
        }
    }
    for (i = 0; i < 2; i++) 
    {
        printf("Satir %d en büyük eleman: %d\n", i, satir_max[i]);
    }
    for (j = 0; j < 3; j++) 
    {
        printf("Sutun %d en büyük eleman: %d\n", j, sutun_max[j]);
    }
    return 0;
}