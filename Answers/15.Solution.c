/* 15-) Two 2x2 matrices will be created, numbers will be entered from the keyboard for each, and 
Write the C code that will assign the sum of these two matrices to a different matrix and print it to the screen; */
#include <stdio.h>
int main() 
{
    int arr_1[2][2], arr_2[2][2], arr_sum[2][2];
    int i, j;
    printf("Enter elements for the 1st array:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("arr_1[%d][%d] = ", i, j);
            scanf("%d", &arr_1[i][j]);
        }
    }
    printf("Enter elements for the 2nd array:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("arr_2[%d][%d] = ", i, j);
            scanf("%d", &arr_2[i][j]);
        }
    }
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            arr_sum[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }
    printf("\nSum of matrices:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("%d ", arr_sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}