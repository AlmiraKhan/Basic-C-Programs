#include<stdio.h>
int sum(int);
int main()
{
    int num,result;
    printf("Finding sum of first N natural numbers using recursion\n");
    printf("-------------------------------------------------------\n");
    printf("Enter the N:");
    scanf("%d",&num);
    printf("The sum is %d",sum(num));
    return 0;
}
int sum(int num)
{
    
    if(num==0)
        return num;
    else
    {
        return num +sum(num-1);;
    }
}



