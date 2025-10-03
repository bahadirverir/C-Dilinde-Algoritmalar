/* 25-) An array with 10 elements is created and random numbers are entered into the array from the keyboard.
Write the C code that calculates the average of the entered numbers and prints the numbers above and below the average to the screen; */
#include <stdio.h>
int main() 
{
    int arr[10];
    int i;
    int sum = 0;
    float average;
    for(i = 0; i < 10; i++) 
    {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; 
    }
    average = (float)sum / 10;
    printf("Average: %.2f\n", average); 
    printf("Numbers above average: ");
    int found = 0; 
    for(i = 0; i < 10; i++) 
    {
        if(arr[i] > average) 
        {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if (!found) printf("None");
    printf("\n");
    printf("Numbers below average: ");
    found = 0; 
    for(i = 0; i < 10; i++) 
    {
        if(arr[i] < average) 
        {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if (!found) printf("None");
    printf("\n");
    return 0;
}