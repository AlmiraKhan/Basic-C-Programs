#include<stdio.h>
int swap(int *a,int *b);
int main()
{
    int x,y;
    printf("Enter the values for x and y:");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("x=%d y=%d",x,y);
    return 0;
}
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("x=%d,y=%d\n",*x,*y);
}