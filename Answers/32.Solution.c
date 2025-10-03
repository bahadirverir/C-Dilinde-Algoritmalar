/* 32-) An array with 10 elements is created and random values are entered into the array from the keyboard.
Write the C code of the function that calculates the mode and median values of the array and prints them to the screen; */
#include <stdio.h>
int CalculateModeMedian(int arr[], int *mode, float *median)
{
    int counter[101]={0}; // Assuming numbers are between 0 and 100
    int max_count=0;
    int i; 
    for(i=0;i<10;i++) 
    {
        counter[arr[i]]++;
        if(counter[arr[i]]>max_count)
        {
            max_count = counter[arr[i]];
            *mode = arr[i];
        }
    }
    int j;
    for(i=0;i<10-1;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    *median = (arr[10/2 - 1] + arr[10/2])/2.0;
    
    return 0;
}

int main()
{
    int arr[10];
    int i;
    printf("Enter 10 numbers for the array:\n");
    for(i=0;i<10;i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    int mode;
    float median;
    CalculateModeMedian(arr, &mode, &median);
    printf("Mode of the array: %d\n", mode);
    printf("Median of the array: %.1f\n", median);
}