#include<stdio.h>
#include<string.h>
int substring(char str1[],char str2[]);
int main()
{
    int result;
    char str1[50],str2[50];
    printf("Enter string 1:");
    gets(str1);
    printf("Enter string 2:");
    gets(str2);
    result=substring(str1,str2);
    if(result==1)
        printf("string 2 is a substring of string 1");
    else
        printf("string 2 is not a substring of string 1");
    return 0;
}
int substring(char str1[],char str2[])
{
    int i,l1,l2,j,flag;
    l1=strlen(str1);
    l2=strlen(str2);

    for(i=0;i<=l1-l2;i++)
    {
        flag=1;
        for(j=0;j<l2;j++)
        {
            if(str1[i+j]!=str2[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        return 1;
    }
    return 0;
    
}