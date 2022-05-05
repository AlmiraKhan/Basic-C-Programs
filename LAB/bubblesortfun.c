#include<stdio.h>
int bubble(int n,int arr[]);
int main()
{
    int arr[50],i,n;
    printf("Bubblesort using function\n");
    printf("-------------------------\n");
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    bubble(n,arr);
    return 0;
}
int bubble(int n,int arr[])
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The sorted array\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

}
