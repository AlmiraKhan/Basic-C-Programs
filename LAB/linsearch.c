#include<stdio.h>
int main()
{
    int a[50],n,i,s,count=0;
    printf("\nFinding an element from array");
    printf("\n-----------------------------------------------\n");

    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements:",n);
       for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the element to be searched: ");
    scanf("%d",&s);

    for(i=0;i<n;i++)
    {
        if(s==a[i])
        {
            printf("\nElement present in the position %d.\n",i+1);
            count++;
            continue;
        }
    }
    if(count==0)
    {
        printf("NOT FOUND!");
    }
    
    return 0;
}