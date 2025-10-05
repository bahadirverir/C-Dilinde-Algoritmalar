/* 28-) An array with 10 elements is created and random numbers are entered into the array from the keyboard.
Write the C code that finds the repeating ones in the numbers and prints them to the screen; */
#include <stdio.h>
int main()
{
    int arr[10];
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    printf("Repeating elements in the array: ");
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                int k;
                int is_already_printed = 0;
                for (k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        is_already_printed = 1;
                        break;
                    }
                }
                if (!is_already_printed) {
                    printf("%d ", arr[i]);
                }
                break;
            }
        }
    }
    printf("\n");
    return 0;
}   