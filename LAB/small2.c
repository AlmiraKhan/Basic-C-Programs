#include<stdio.h>
int main()
{
    int n,a[50],i,smallest,smallest2;
    printf("\nFinding the second smallest element of the array");
    printf("\n-----------------------------------------------\n");

    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    if(a[0]<a[1])
    {
        smallest=a[0];
        smallest2=a[1];
    }
    else
    {
        smallest=a[1];
        smallest2=a[0];
    }

    for(i=2;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest2=smallest;
            smallest=a[i];
        }
        
        else if(a[i]<smallest2)
        {
            smallest2=a[i];
        }
    }
    printf("%d is the second smallest element",smallest2);
    return 0;

}
