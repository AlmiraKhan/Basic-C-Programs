#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values for a,b and c ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is the greatest",a);

    }
    else if(b>c)
        {
            printf("%d is the greatest",b);
        }
        else
        {
            printf("%d is the greatest",c);
        }
    return 0;
}