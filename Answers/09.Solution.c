/* 9-) From the numbers entered into a 10-element array, the largest and smallest 
Write the C code that finds the values of the number and its index numbers; */
#include <stdio.h>
int main() 
{
    int arr[10];
    int i;
    for (i = 0; i < 10; i++) 
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    int max_index = 0, min_index = 0;

    for (i = 1; i < 10; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min) 
        {
            min = arr[i];
            min_index = i;
        }
    }
    printf("Largest value = %d, Index no = %d\n", max, max_index);
    printf("Smallest value = %d, Index no = %d\n", min, min_index);
    return 0;
}
