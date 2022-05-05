#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1,*f2;
    char source[20],target[20];
    char c,c1;
    printf("Enter source file name:");
    scanf("%s",source);
    f1=fopen(source,"w");
    if(f1==NULL)
    {
        printf("Unable to open the source file");
        exit(0);
    }
    printf("Enter data(* to stop):");
    while(1)
    {
        c1=getchar();
        if(c1=='*')
            break;
        else
        {
            fputc(c1,f1);
        }
    }
    fclose(f1);

    printf("Enter target file name:");
    scanf("%s",target);

    f2=fopen(target,"w");
    f1=fopen(source,"r");
    if(f1==NULL)
    {
        printf("Unable to open the source file");
        exit(0);
    }

    while(1)
    {
        c=fgetc(f1);
        if(c!=EOF)
            fputc(c,f2);
        
        else
            break;
    }
    fclose(f1);
    fclose(f2);
    printf("The data stored in Target file:\n");
    f2=fopen(target,"r");
    while(1)
    {
        c=fgetc(f2);
        if(c==EOF)
        break;
        printf("%c",c);
    }
    fclose(f2);
   

    return 0;
}