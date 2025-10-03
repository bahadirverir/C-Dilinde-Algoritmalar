/* 14-) Create a 3x3 matrix, and the entered numbers are odd and even 
Write the C code that will be collected among themselves and printed on the screen with the number of these numbers; */
#include <stdio.h>
int main() 
{
    int arr[3][3];
    int odd_sum = 0, even_sum = 0;
    int odd_count = 0, even_count = 0;
    int i, j;
    
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
            if (arr[i][j] % 2 == 0) 
            {
                even_sum += arr[i][j];
                even_count++;
            }
            else 
            {
                odd_sum += arr[i][j];
                odd_count++;
            }
        }
    }
    printf("\nSum of odd numbers = %d\n", odd_sum);
    printf("Number of odd numbers = %d\n", odd_count);
    printf("Sum of even numbers = %d\n", even_sum);
    printf("Number of even numbers = %d\n", even_count);
    return 0;
}