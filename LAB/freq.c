+#include<stdio.h>
int main()
{
    int arr[200],n,i,fr[50];
    int dup,j;
    printf("\nCounting the frequency of occurance of elements");
    printf("\n-----------------------------------------------\n");
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        fr[i]=1;
    }

    for(i=0;i<n;i++)
    {
        dup=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                dup++;
                fr[j]=0;
            }
        }
        if(fr[i]!=0)
        {
            fr[i]=dup;
        }
    }
    
        for(i=0;i<n;i++)
        { 
            if(fr[i]!=0)
            {
                printf("Element %d appears %d times\n",arr[i],fr[i]);
            }
        }   
    return 0;
}