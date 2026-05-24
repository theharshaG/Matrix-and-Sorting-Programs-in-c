#include <stdio.h>

int main()
{
    int arr[5];
    int i, j, temp;

    printf("Enter the array elements: ");

    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<5-1; i++)
    {
        for(j=0; j<5-1-i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("\nDescending order:\n");

    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nLargest = %d",arr[0]);
    printf("\nSecond Largest = %d",arr[1]);

    return 0;
}
