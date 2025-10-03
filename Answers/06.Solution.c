/* 6-)Write the C code of the function that gives the sum of two numbers; */
#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int a,b;
    printf("\n");
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    printf("sum= %d\n",(sum(a,b)));
    printf("\n");
}