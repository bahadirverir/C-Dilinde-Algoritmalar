/* 31-) An array with 10 elements is created and random values are entered into the array from the keyboard.
Write the C code of the function that checks whether the desired number is in the array; */
#include <stdio.h>
int number_function(int arr[],int desired) 
{
    int i;
    for(i=0;i<10;i++)
    {
        if (arr[i]==desired)
        {
            return i; 
        }
    }
        return -1; 
}

int main()
{
    int arr[10]; 
    int i;
    for(i=0;i<10;i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    int desired;
    printf("Enter the number you are looking for: ");
    scanf("%d",&desired);
    int result = (number_function(arr,desired));
    if (result!=-1)
    {
        printf("The desired number %d exists in the array and its index is: %d\n",desired,result);
    } 
    else
    {
        printf("The desired number %d is not in the array\n",desired);
    }
}