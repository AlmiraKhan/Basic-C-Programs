#include<stdio.h>
int main()
{
    //fibonacci series-0,1,1,2,3,5,8
    int n1=0,n2=1,f,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("%d,%d",n1,n2);
    f=n1+n2;
    while(f<=n)
    {
        printf(",%d",f);
        n1=n2;
        n2=f;
        f=n1+n2;  
       
    }
    return 0;

}
   