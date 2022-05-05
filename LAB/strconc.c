#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char str1[50],str2[50],str[50];
    printf("\nConcatenating two strings");
    printf("\n-------------------------\n");

    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);
    l=strlen(str1);

    for(i=0;i<l;i++)
    {
        str[i]=str1[i];
      
    }
    printf("%c",str[i]=' ');
    for(i=0,j=l+1;str2[i]!='\0';j++,i++)
    {
        str[j]=str2[i];
        
    }
    printf("%s",str);
    return 0;
} 