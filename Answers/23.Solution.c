/* 23-) An array with 5 elements is created and random numbers are entered into the array from the keyboard.
Write the C code of the function that calculates the square root of the entered numbers and prints it to the screen; */
#include <stdio.h>
#include <math.h>
int sqrt_function(float arr[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("sqrt(%.2f) = %.2f\n",arr[i],sqrt(arr[i]));
    }
    return 0;
}

int main() 
{   
    float arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("arr[%d]= ",i);
        scanf("%f",&arr[i]);
    }
    sqrt_function(arr);
}