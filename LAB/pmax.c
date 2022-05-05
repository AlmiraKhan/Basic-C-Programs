#include<stdio.h>
int *max(int,int*);
int main()
{
    int arr[30],n,i,*result;
    printf("Maximum element of an array\n");
    printf("---------------------------\n");
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    result=max(n,arr);
    printf("Maximum element:%d\n",*result);
    printf("Address:%p",result);
    
    return 0;

}
int *max(int n,int *arr)
{
    int j;
    int *p=&arr[0];
    for(j=1;j<n;j++)
    {
        if(*(arr+j)>*p)
        {
            p=&arr[j];
        }
    }
    return p;

}