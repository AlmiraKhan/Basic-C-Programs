#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],l,a;
    int i,j;
    printf("Enter the string:");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        printf("%s\n",str);
        a=str[0];
        for(j=0;j<l;j++)
        {
            str[j]=str[j+1];
        }
        str[l-1]=a;
        
    }
    return 0;
}