/* 26-) An array with 10 elements is created and random numbers are entered into the array from the keyboard.
Write the C code that sorts the entered numbers from smallest to largest and prints them to the screen; */
#include <stdio.h>
int main()
{
    int arr[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    int j,temp;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Re-sorting the array...");
    i=0;
    while(i<10)
    {
        printf("\narr[%d]= %d",i,arr[i]);
        i++;
    }
    printf("\n");
}