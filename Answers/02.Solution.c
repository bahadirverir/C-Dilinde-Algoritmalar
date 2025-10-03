/* 2-) Write the C code that calculates the factorial of a number entered using a while loop; */
#include <stdio.h>
int main()
{
    int factorial=1;
    int number;
    int i=1;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    while(i<=number)
    {
        factorial=factorial*i;
        i++;
    }
    printf("factorial = %d\n",factorial);
}