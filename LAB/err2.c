#include<stdio.h>
#include<string.h>
int main()
{
    int arr[50],l,a,n,N;
    int i,j;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the value of N:");
    scanf("%d",&N);
    
    for(i=0;i<N;i++)
    {
       a=arr[n-1];
       for(j=n-2;j>=0;j--)
       {
           arr[j+1]=arr[j];
       }
       arr[0]=a;
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}