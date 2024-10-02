#include<stdio.h>
void swap(int arr[],int * x,int  *y)
    {
        int temp= *x;
        *x= *y;
        *y=temp;
    }
    int main()
    {
        int arr[]={1,2,3,4};
        for(int i=0;i<4;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n\n");
    swap(arr, &arr[0], &arr[1]);
    for(int i=0;i<4;i++)
    {
        printf("%d  ",arr[i]);
    }
    }