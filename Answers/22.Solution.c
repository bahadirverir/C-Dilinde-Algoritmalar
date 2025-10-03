/* 22-) Finds the prime numbers in the entered range and saves them to an array.
Write the C code of the function that prints it to the screen; */
#include <stdio.h>
#include <stdbool.h>
int prime_function(int start, int end) 
{
    int prime_array[100]; 
    int index = 0; 
    bool is_prime; 
    for (int i=start;i<=end;i++) 
    {
        is_prime = true;
        if (i <= 1) {
            is_prime = false;
        } else {
            for (int j=2;j*j<=i;j++) 
            {
                if (i%j==0) 
                {
                    is_prime = false; 
                    break;
                }
            }
        }
        if(is_prime)
        {  
            prime_array[index] = i;
            index++;
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

int main()
{
    int start, end;
    printf("Enter start value: ");
    scanf("%d",&start);
    printf("Enter end value: ");
    scanf("%d",&end);
    printf("Prime numbers in the entered range:\n");
    prime_function(start, end);
}