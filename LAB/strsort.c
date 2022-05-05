#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,j;
    char str[50],temp; 
    printf("\nSorting array in ascending order");
    printf("\n-------------------------\n");

    printf("Enter the string ");
    gets(str);

    l=strlen(str);
    
    for(i=1;i<l;i++)
    {
        for(j=0;j<l-i;j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j+1];
                str[j+1]=str[j];
                str[j]=temp;
            }

        }
    }
    
    printf("The sorted string: ");
    printf("%s",str);
    return 0;
}