#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c=0,s=0,n=0,t=0;
    char ch,file[20],data;
    FILE *fp;
    printf("Enter file name to be opened:");
    gets(file);
    fp=fopen(file,"w");
    if(fp==NULL)
    {
        printf("Unable to open the file");
        exit(0);
    }
    printf("Enter the data(* to exit):");
    while(1)
    {
        data=getchar();
        if(data=='*')
            break;
        fputc(data,fp);
    }
    fclose(fp);
    fp=fopen(file,"r");
    if(fp==NULL)
    {
        printf("Unable to open the file");
        exit(0);
    }
    while(1)
    {
        data=fgetc(fp);
        if(data==EOF)
            break;
        switch(data)
        {
            case ' ':
                s++;
                break;
            case '\n':
                n++;
                break;
            case '\t':
                t++;
                break;
            default:
                c++;
        }
    
    }
    printf("spaces:%d\tnewlines:%d\ttabs:%d\tcharacters:%d",s,n,t,c);
    return 0;

}