#include<stdio.h>
int pyramid(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    pyramid(n);
    return 0;
}
int pyramid(int n)
{
    int i;
    if(n==0)
    {
        return n; 
    }
    else 
    {
        pyramid(n-1);
        for(i=n;i>0;i--)
        {
            printf("%d ",i);  
        }
        printf("\n");
        
    }
}