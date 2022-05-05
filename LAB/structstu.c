#include<stdio.h>
struct details
{
    char name[50];
    int roll;
    int mark1,mark2,mark3;
    int avg;

}s[50];
int main()
{
    int i,n,j;
    struct details temp;
    printf("Student details\n");
    printf("---------------\n");
    printf("Enter the number of students:");
    scanf("%d",&n);
    printf("Enter details below:\n");
    for(i=0;i<n;i++)
    {
        printf("Student %d name:",i+1);
        scanf("%s",s[i].name);
        printf("Enter roll number of student:");
        scanf("%d",&s[i].roll);
        printf("Enter mark 1:",s[i].mark1);
        scanf("%d",&s[i].mark1);
        printf("Enter mark 2:",s[i].mark2);
        scanf("%d",&s[i].mark2);
        printf("Enter mark 3:",s[i].mark3);
        scanf("%d",&s[i].mark3);
        s[i].avg=(s[i].mark1+s[i].mark2+s[i].mark3)/3;
    }
    
    for(i=0;i<n;i++)
    {
        printf("Student %d\n",i+1);
        printf("-----------\n");
        printf("Average:%d\n\n",s[i].avg);

    }

return 0;

}