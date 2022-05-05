#include<stdio.h>
int isprime(int);
int main()
{
    int low,upp,result,i;
    printf("Prime numbers in given range\n");
    printf("----------------------------\n");
    printf("Enter the lower limit and upper limit:");
    scanf("%d %d",&low,&upp);
    printf("Prime numbers in given range:\n");
    for(i=low;i<=upp;i++)
    {
        result=isprime(i);
        if(result==1)
            printf("%d ",i);
        
    }
    return 0;

}
int isprime(int i)
{
    int j;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {   
            return 0;
            //break;
        }    
    }
    return 1;
}