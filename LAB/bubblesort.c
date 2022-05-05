#include<stdio.h>
int main()
{
    int a[100],i,n,j,temp;
    printf("Enter the size of array to be sorted: ");
    scanf("%d",&n);

    printf("Enter %d integers: ",n);
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    
    //BUBBLE SORT
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}