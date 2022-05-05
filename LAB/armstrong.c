#include<stdio.h>
#include<math.h>
    int main()
{
    int t,num,rem,n=0,power,sum=0;

    printf("Enter the number here: ");
    scanf("%d",&num);
    t=num;

    while(num!=0)
    {
        num=num/10;
        n++;
    }
    printf("The number of digits are %d\n",n);

    num=t;
    while(num!=0)
    {
        rem=num%10;
        power=pow(rem,n);
        sum=sum+power;
        num=num/10;
    }
    (sum==t)?printf("%d is an Armstrong number",t):printf("%d is not an armstrong number",t);
    return 0;
}
