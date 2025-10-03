/* 19-) An array with 10 elements is created and numbers are entered into the array from the keyboard.
Write the C code of the function that prints to the screen how many of the numbers entered into the array are prime; */
#include <stdio.h>
int find_prime(int arr[]) 
{
    int counter = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (arr[i] <= 1) continue;
        int is_prime = 1;
        for (int j = 2; j < arr[i]; j++) 
        {
            if (arr[i] % j == 0) 
            {
                is_prime = 0; 
                break; 
            }
        }
        if (is_prime==1)
        {
            counter++;
        } 
    }
    return counter; 
}

int main() 
{
    int arr[10];
    for (int i = 0; i < 10; i++) 
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("%d of the numbers entered into the array are prime\n",(find_prime(arr)));
}