#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    switch(n>0)
    {
        case 1:
         printf("The number is positive");
         break;
        case 0:
            switch(n<0)
            {
                case 1:
                 printf("The number is negative");
                 break;
                case 0:
                 printf("Zero");
                 break;
            }
    }
    return 0;
}