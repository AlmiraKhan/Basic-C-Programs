#include<stdio.h>
#include<stdlib.h>
int main()
{
    int word=0,vowel=0,letters=0;
    char ch[50],file[20],output[30];
    FILE *fp,*fo;
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
        ch=getchar();
        if(ch=='*')
            break;
        fputc(ch,fp);
    }
    fclose(fp);
    fp=fopen(file,"r");
    if(fp==NULL)
    {
        printf("Unable to open the file");
        exit(0);
    }
    fo=fopen(output,"w");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        break;
        fputs(ch,fo);
        
    }
    
    while(1)
    {
        if(ch=='.'||ch==EOF)
            break;
        ch=fgetc(fo);
        word++;
        while(ch!=' ')
        {
            letters++;
            if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
                vowel++;
        }
        printf("word%d:\nletters:%d\tvowels:%d\tconsonants:%d",word,letters,vowel,letters-vowel);
    
    }
    printf("word count %d",word+1);







}