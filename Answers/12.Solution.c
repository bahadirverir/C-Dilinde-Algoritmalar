/* 12-) Write the C code that sorts the numbers entered into a 10-element array from largest to smallest; */
#include <stdio.h>
int main() 
{
    int arr[10];
    int i, j, temp;
    for (i = 0; i < 10; i++) 
    {
        printf("Enter the %d. element of the array: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) 
        {
            if (arr[i] < arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nThe entered values sorted from largest to smallest:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}