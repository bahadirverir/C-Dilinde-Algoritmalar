/* 30-) A 2 by 3 matrix is created and numbers are entered into the matrix from the keyboard.
Write the C code that converts the created matrix into a one-dimensional array and prints it to the screen; */
#include <stdio.h>
int main()
{
    int matrix[2][3];
    int arr[6];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Matrix[%d][%d]= ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    int index = 0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            arr[index] = matrix[i][j];
            index++;
        }
    }
    printf("printing one-dimensional array:\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",arr[i]);
    }
}