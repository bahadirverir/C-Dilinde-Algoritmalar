/* 29-) A 3 by 3 matrix is created and random numbers are entered into the matrix from the keyboard.
Write the C code that finds the largest and smallest number in the matrix and prints it to the screen; */
#include <stdio.h>
int main()
{
    int matrix[3][3];
    int i,j;
    int largest,smallest;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("matrix[%d][%d]= ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    largest = smallest = matrix[0][0]; 
    for(i=0;i<3;i++) 
    {
        for(j=0;j<3;j++)
        {
            if(matrix[i][j]>largest)
            {
                largest = matrix[i][j];
            }
            if (matrix[i][j]<smallest)
            {
                smallest = matrix[i][j];
            }
        }
    }   
    printf("largest value = %d\n",largest);
    printf("smallest value = %d\n",smallest);
}