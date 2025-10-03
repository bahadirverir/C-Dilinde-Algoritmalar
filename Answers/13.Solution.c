/* 13-) Write the C code that creates a 4x4 matrix and finds the sum of its corner elements; */
#include <stdio.h>
int main()
{
    int arr[4][4];
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    sum = (arr[0][0]+arr[0][3]+arr[3][0]+arr[3][3]);
    printf("sum = %d",sum);
    printf("\n\n");
}