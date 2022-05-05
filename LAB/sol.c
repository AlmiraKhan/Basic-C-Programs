#include<stdio.h>
int main()
{   int a,b,c,d,e,f,g,x;
    printf("Enter the values for a,b,c,d,e,f,g: ");
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
    x=((a-b/c*d+e)*(f+g));
    printf("%d",x);
    return 0;
}