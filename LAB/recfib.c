#include<stdio.h>
void fibonacci(int,int,int);
int main()
{
    int num,f;
    printf("Fibonacci series using recursion\n");
    printf("--------------------------------\n");
    printf("Enter the number:");
    scanf("%d",&num);
    int n1=0,n2=1;
    printf("%d %d ",n1,n2);
    f=n1+n2;
    fibonacci(num,f,n2);
    return 0;
}
void fibonacci(int num,int f,int n2)
{
    if(f<num)
    {
        printf("%d ",f);
        f=f+n2;
        n2=f-n2;
        fibonacci(num,f,n2);
    }      
}