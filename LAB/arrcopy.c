#include<stdio.h>
int main()
{
    int n,arr1[50],arr2[50],i;
    printf("\nCopy elements of one array into another");
    printf("\n-----------------------------------------------\n");

    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr1[i]);

    printf("ORIGINAL:");
    for(i=0;i<n;i++)
        printf("%d ",arr1[i]);

    printf("\nCOPY:");
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
        printf("%d ",arr2[i]);
    }
    return 0;
}