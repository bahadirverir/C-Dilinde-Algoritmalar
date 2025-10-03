/* 17-) A 3x3 matrix is created and random numbers are entered into the matrix from the keyboard.
Accordingly, write the C code that prints this matrix on the screen in reverse order; */
#include <stdio.h>
int main() 
{
    int matrix[3][3];
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("matrix[%d][%d]= ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe values in the matrix are being written in reverse order...\n\n");
    for (int i = 2; i >= 0; i--) 
    {
        for (int j = 2; j >= 0; j--) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}