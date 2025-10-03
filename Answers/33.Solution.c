/*33-) A word entered randomly from the keyboard is saved in the array. 
Write the C code of the function that prints the entered word to the screen in reverse order; */
#include <stdio.h>
int word_function(char word[])
{
    int length = 0;
    while(word[length]!='\0')
    {
        length++;
    }
    printf("The word is being printed in reverse order\n");
    int i;
    for(i=length-1;i>=0;i--) 
    {
        printf("%c",word[i]);    
    }
    printf("\n");
    return 0;
}

int main()
{
    char word[100];
    printf("Enter a word: ");
    scanf("%s",word);
    word_function(word);
}