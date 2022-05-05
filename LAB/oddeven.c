#include<stdio.h>
int main()
{
    int n,arr[50],i,even=0,odd=0;
    printf("Enter the no. of elements");
    scanf("%d",&n);
    printf("Enter the elements:");
     for(i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }

     for(i=0;i<n;i++)
     {
        if(arr[i]%2==0)
        {
            even=even+arr[i];
        }
        else
        {
            odd=odd+arr[i];
        }
     }
     printf("The sum of even elements are %d\n",even);
     printf("The sum of odd elements are %d",odd);
     return 0;
}