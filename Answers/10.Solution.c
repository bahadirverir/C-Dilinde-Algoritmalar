/* 10-) Write the C code that prints the values entered into a 10-element array in reverse order; */
#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    
    for (i = 0; i < 10; i++) 
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEntered values in reverse order:\n");
    for (i = 9; i >= 0; i--) 
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}