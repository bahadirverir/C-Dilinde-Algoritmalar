/* 27-) Creates an inverted triangle according to a randomly entered number from the keyboard and
Write the C code that puts it into an array and prints the array to the screen; */
#include <stdio.h>
int main()
{
    char buffer[100];
    int number; 
    printf("Enter the number: ");
    scanf("%d",&number);
    
    int index = 0;
    int i,j; 
    
    for(i=number;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            buffer[index++] = '*';
            buffer[index++] = ' '; 
        }
        buffer[index++] = '\n'; 
    }
    buffer[index] = '\0'; // Null-terminate the string

    printf("%s", buffer);
}