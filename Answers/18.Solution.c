/* 18-) A 2x2 matrix is created and random numbers are entered into the matrix from the keyboard.
Write the C code that sorts the entered numbers from largest to smallest and prints them to the screen; */
#include <stdio.h>
int main() 
{
    int matrix[2][2];
    int temp;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("matrix[%d][%d]= ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int array[4], index = 0;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            array[index++] = matrix[i][j];
        }
    }
    for (int i = 0; i < 4 - 1; i++) 
    {
        for (int j = 0; j < 4 - i - 1; j++) 
        {
            if (array[j] < array[j + 1]) 
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    index = 0;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            matrix[i][j] = array[index++];
        }
    }
    printf("\nSorting the matrix from largest to smallest:\n\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("%d\n", matrix[i][j]);
        }
    }
    return 0;
}