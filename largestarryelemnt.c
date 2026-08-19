//enter value from the user and find largest elemtn using array
#include<stdio.h>

void main()
{
    int arr[10];
    int i;
    int max;;


    for(i=0;i<10;i++)
    {

    printf("Enter Element:");
    scanf("%d \n",&arr[i]);

    }

    max=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }

    printf("\n \n Largest Element is : %d",max);
}
