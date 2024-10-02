// // // #include<stdio.h>
// // // int isPalindrome(int n){

// // //     int temp=0,sum=0,r=0;
// // //     printf("temp = %d\nsum = %d\n r = %d\nn = %d\n\n", temp,sum,r,n);
// // //     temp=n;
// // //     printf("temp = %d\nsum = %d\n r = %d\nn = %d\n\n", temp,sum,r,n);
// // //     while(n>0)
// // //     {
// // //         r=n%10;
// // //          printf("temp = %d\nsum = %d\n r = %d\nn = %d\n\n", temp,sum,r,n);
// // //         sum=(sum10)+r;
// // //          printf("temp = %d\nsum = %d\n r = %d\nn = %d\n\n", temp,sum,r,n);
// // //         n=n/10;
// // //          printf("temp = %d\nsum = %d\n r = %d\nn = %d\n\n", temp,sum,r,n);
// // //     }
// // // printf("temp = %d\nsum = %d\n r = %d\nn = %d\n\n", temp,sum,r,n);
// // //     if(sum==temp)
// // //     {
// // //         return 1;
// // //     }
// // //     else
// // //    return 1;
    

// // // }
// // int main()
// // {
// //     int n;
// //     printf("enter num\n");
// //     scanf("%d",&n);
// //     isPalindrome(n);

// // }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int i=0,j=0;
//     while(i<n-1 && j<n)
//     {
//         j=i+1;
//         if(arr[i]==arr[j])
//         {
//             i=i+2;
//         }
//         else{
//             printf("no. is %d",arr[i]);
//             return 0;
//         }
//     }
//     printf("no. is %d",arr[n-1]);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n,val;
    printf("enter n");
    scanf("%d",&n);
    printf("enter val");
    scanf("%d",&val);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    
    }
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n \n");
    int c=0,i=0,j=n-1;
    while(i<j)
    {
        while(arr[i]!=val)
        {
            i++;
        }
        c++;
        while(arr[j]==val)
        {
            j--;
        }

        if(i!=j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
     for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n \n");
    printf("no. of times val occurs: %d",c);
    for(int i=0;i<=c;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
    }
    
