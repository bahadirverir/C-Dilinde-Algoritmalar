/* 7-) Write the C code of the function that calculates the factorial value of a number entered; */
#include <stdio.h>
int find_factorial(int number) 
{
    if (number == 0 || number == 1) 
    {
        return 1;
    }
    int i = 1;
    int factorial = 1;
    while (i <= number) 
    {
        factorial *= i;
        i++;  
    }
    return factorial; 
}

int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Result = %d\n", find_factorial(number));
    return 0;
}