#include<stdio.h>
int swap(int,int);
int main()
{
    int x,y;
    printf("Enter the values for x and y:");
    scanf("%d %d",&x,&y);
    printf("Before swapping\nx=%d y=%d",x,y);
    swap(x,y);
    return 0;
}
int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter swapping\nx=%d y=%d",x,y);
}