#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char temp;
    char *i,*j;
    char str[30];
    printf("Reversing a string using pointers\n");
    printf("---------------------------------\n");
    printf("Enter the string:");
    gets(str);
    l=strlen(str);
    i=&str[0];
    j=&str[l-1];
    int k=0;
    while(k<l/2)
    {
        temp=*i;
        *i=*j;
        *j=temp;
        k++;
        i++;
        j--;
    }
    printf("%s",str);
    return 0;

}