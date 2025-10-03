/* 20-) An array of 10 elements is created and random numbers are entered into the array.
Write the C code of the function that prints the even ones of the entered values and the sum of the even ones to the screen; */
#include <stdio.h>
int even_function(int arr[]) 
{
    int even_sum = 0;
    int even_exists = 0; 
    printf("Even numbers: ");
    for (int i = 0; i < 10; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            printf("%d", arr[i]);
            even_sum += arr[i];
            even_exists = 1;
            
            int next_even_found = 0;
            for (int j = i + 1; j < 10; j++) {
                if (arr[j] % 2 == 0) {
                    next_even_found = 1;
                    break;
                }
            }
            if (next_even_found) {
                printf(", ");
            }
        }
    }
    if (even_exists == 0) 
    {
        printf("No even numbers.\n");
    } 
    else 
    {
        printf("\nSum: %d\n", even_sum);
    }
    return 0;
}

int main() 
{
    int arr[10];
    for (int i = 0; i < 10; i++) 
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    even_function(arr);
    return 0;
}