#include<stdio.h>
int main()
{
    char str[50];
    int i,vowel=0,cons=0,spaces=0;
    printf("\nChecking for number of vowels,consonants and whitespaces in a string");
    printf("\n--------------------------------------------------------------------\n");

    printf("Enter the string ");
    gets(str);

    i=0;
    while(str[i]!=0)
    {
    
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'||
        str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
       
        else if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            cons++;
        }
        else if(str[i]==' ')
        {
            spaces++;
        }
        
       i++;
    }
    printf("Vowel:%d\nConsonants:%d\nWhitespaces:%d",vowel,cons,spaces);
    return 0;
}