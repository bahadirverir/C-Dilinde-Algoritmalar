/* 11-) Write the C code of the function that finds the length of the entered word; */
#include <stdio.h>
int Word_length(char arr[]) 
{
    int length = 0;
    while (arr[length] != '\0') 
    {
        length++;
    }
    return length;
}

int main() 
{
    char arr[100];
    printf("\n\n");
    printf("Enter a word: ");
    scanf("%s",arr);
    printf("Word length: %d\n",Word_length(arr));
    printf("\n");
    
}