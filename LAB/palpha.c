#include<stdio.h>
int main()
{
    printf("Alphabets\n");
    printf("---------\n");
    int *p;
    int i=65;
    p=&i;
    while(*p<=90)
    {
        printf("%c %d   ",*p,*p);
        (*p)++;
    }
    
    return 0;
}