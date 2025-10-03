/* 21-) An array with N elements is created and random numbers are entered into the array.
Write the C code of the function that calculates the arithmetic mean of the entered numbers and prints it to the screen; */
#include <stdio.h>
float arithmetic_mean(int arr[], int n)
{
    float sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    return sum / n;
}

int main() 
{
    int n;
    printf("How many elements do you want to create an array with? :");
    scanf("%d",&n);
    int arr[n];
    int i;     
    for (i=0;i<n;i++) 
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("The arithmetic mean of the array = %.2f\n",(arithmetic_mean(arr, n)));
}