#include<stdio.h>
#include<string.h>
void rev(char *str);
int main()
{
    int l;
    char str[50];
    printf("Enter the string:");
    gets(str);
    rev(str);
    return 0;
}
//hey hello how
//woh olleh yeh

void rev(char *str)
{
    int l=strlen(str),i;
    //printf("%d",l);
    char temp;
    //puts(str);
    for(i=0;i<l/2;i++)
    {
        temp=*(str+l-i-1);
        *(str+l-i-1)=*(str+i);
        *(str+i)=temp;
    }
    
    puts(str);
    
}