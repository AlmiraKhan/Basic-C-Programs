#include<stdio.h>
#include<string.h>
void encrypt(char *);
int main()
{
    char str[30];
    printf("Enter the string:");
    gets(str);
    encrypt(str);
    return 0;
}
void encrypt(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++)
    {
        *(p+i)+=3;
    }
    printf("%s",p);
}