/* 4-) Write the C code that checks whether a number entered is prime or not using a while loop; */
#include <stdio.h>
int main()
{
    int number, i = 2, counter = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 2) 
    {
        printf("%d is not prime.\n", number);
    } 
    else{
        while (i * i <= number) 
        {
            if (number % i == 0) 
            {
                counter++;
                break; 
            }
            i++;
        }
        if (counter == 0)
            printf("\n%d is prime.\n", number);
        else
            printf("\n%d is not prime.\n", number);
    }
    return 0;
}