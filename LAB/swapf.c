#include<stdio.h>
int swapref(int *x,int *y);
int swapval(int,int);
int main()
{
    int n1,n2;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    swapval(n1,n2);
    printf("Original numbers:%d and %d\n",n1,n2);
    swapref(&n1,&n2);
    printf("Original numbers now become:%d and %d\n",n1,n2);
    return 0;
}
int swapval(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("After swapping(call by value):%d and %d\n",x,y);
}
int swapref(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("After swapping(call by reference):%d and %d\n",*x,*y);

}