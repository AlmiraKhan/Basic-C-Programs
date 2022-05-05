#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int l,i,j,flag=1;
    printf("\nChecking if a string is palindrome or not");
    printf("\n-----------------------------------------------\n");

    printf("Enter the string ");
    gets(str);

    for(i=0;str[i]!='\0';i++)//finding length of string
       l++;

    
    for(i=0,j=l-1;i<=l/2;i++,j--)
    {
        if(str[i]!=str[j])
            {
                printf("Not a palindrome\n");
                flag=0;
                break;
            }
    }
    if(flag==1)
        printf("It is a palindrome");
    return 0;
}