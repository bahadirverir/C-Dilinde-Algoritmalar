/* 1-) Write the C code that calculates the factorial of a number entered using a for loop; */
#include <stdio.h>
int main()
{
    int number;
    int factorial=1;
    int i;
    printf("Enter a number: ");
    scanf("%d",&number);
    
    for(i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
    printf("Factorial = %d\n",factorial);
}