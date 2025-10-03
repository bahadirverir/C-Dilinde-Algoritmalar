/* 5-) Write the C code that will stop when the sum of the entered numbers exceeds 100 and 
print the total and the number of numbers; */
#include <stdio.h>
int main()
{
    int total=0;
    int number;
    int counter=0;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&number);
        total=total+number;
        counter++;
    } 
    while (total<100);
    printf("Total = %d , count = %d",total,counter);
    printf("\n\n");
}