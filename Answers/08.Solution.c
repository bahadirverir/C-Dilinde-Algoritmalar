/* 8-) Enter random numbers from the keyboard into an array of 10 elements.  
Write the C code that calculates the sum and average of the numbers; */
#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    int sum = 0;

    for (i = 0; i < 10; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++) 
    {
        sum += arr[i];
    }
    
    float average = sum / 10.0;  
    printf("Sum = %d, Average = %.2f\n", sum, average);
    return 0;
}
