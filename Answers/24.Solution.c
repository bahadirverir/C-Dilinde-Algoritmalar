/* 24-) A multiplication table is created according to the two numbers received from the user and these values are
saved to an array. Write the C code that prints the created array to the screen; */
#include <stdio.h>
int main() 
{
    int first_number, second_number;
    int i, j;
    printf("Enter the first number: ");
    scanf("%d", &first_number);
    printf("Enter the second number: ");
    scanf("%d", &second_number);

    int table[first_number][second_number];
    for (i = 0; i < first_number; i++) 
    {
        for (j = 0; j < second_number; j++) 
        {
            table[i][j] = (i + 1) * (j + 1); 
        }
    }
    printf("\nMultiplication Table:\n");
    for (i = 0; i < first_number; i++) 
    {
        for (j = 0; j < second_number; j++) 
        {
            printf("%4d", table[i][j]); 
        }
        printf("\n");
    }   
    return 0;
}