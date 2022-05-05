#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    int i,l=0,j;
    printf("Enter the first string ");
    gets(str1);
    printf("Enter the second string ");
    gets(str2);

    for(i=0;str1[i]!='\0';i++)
        l+=1;
    
    printf("%c",str1[l]=' ');
    
    for(i=l+1,j=0;str2[j]!='\0';i++,j++)
    {
        str1[i]=str2[j];
    }
   
    
    printf("concatenated string is %s",str1);
    return 0;

}