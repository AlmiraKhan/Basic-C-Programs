#include<stdio.h>
void grade(int p)
{
    if(p>75)
    printf("Distinction");
    else if(p<75 && p>=60)
    printf("First class");
    else if(p<60 && p>=50)
    printf("second class");
    else if(p<50 && p>=40)
    printf("Third class");
    else if(p<40)
    printf("Failed");
}
struct student
{
    char name[20];
    int roll;
    int mark1,mark2,mark3;
    float percent;
}s[30],details[30];

int main()
{
    
    int i,n,choice,temp,j,repeat=0,roll;
    
    printf("Student details\n");
    printf("---------------\n");
    printf("Enter the total no.of students:");
    scanf("%d",&n);
    printf("Enter the details of students\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the roll number of student %d:",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter the name of Student %d\n",i+1);
        scanf("%s",s[i].name);
        printf("Enter mark 1:");
        scanf("%d",&s[i].mark1);
        printf("Enter mark 2:");
        scanf("%d",&s[i].mark2);
        printf("Enter mark 3:");
        scanf("%d",&s[i].mark3);
        s[i].percent=(s[i].mark1+s[i].mark2+s[i].mark3)/3;
    }
    do
    {
        printf("Enter the choice of operation\n(1)search based on roll number\n(2)Ranklist based on marks\n(3)Details based on roll numbers\n(4)Distinction holders\n(5)Failed students:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the roll number of student:");
                scanf("%d",&roll);
                for(i=0;i<n;i++)
                {
                    if(roll==s[i].roll)
                    {
                        printf("Name:%s\n",s[i].name);
                        printf("Mark 1:%d\n",s[i].mark1);
                        printf("mark 2:%d\n",s[i].mark2);
                        printf("mark 3:%d\n",s[i].mark3);
                        printf("Percentage:%f\n",s[i].percent);
                        grade(s[i].percent);
                        printf("\n");
                    }
                }
                
            break;

            case 2:
                printf("Ranklist:\n");
                //temp=s[0].percent;
                for(i=0;i<n-1;i++)
                {
                    for(j=0;j<n-i-1;j++)
                    {
                        if(s[j].percent<s[j+1].percent)
                        {
                            details[j]=s[j];
                            s[j]=s[j+1];
                            s[j+1]=details[j];
                        }
                    }
                }
                for(i=0;i<n;i++)
                {
                    printf("Roll no.:%d\n",s[i].roll);
                    printf("Name:%s\n",s[i].name);
                    printf("Mark 1:%d\n",s[i].mark1);
                    printf("mark 2:%d\n",s[i].mark2);
                    printf("mark 3:%d\n",s[i].mark3);
                    printf("Percentage:%f\n",s[i].percent);
                    grade(s[i].percent);
                    printf("\n");

                    
                }
                break;
            case 3:
            printf("List based on roll number:\n");
            for(i=0;i<n-1;i++)
                {
                    for(j=0;j<n-i-1;j++)
                    {
                        if(s[j].roll>s[j+1].roll)
                        {
                            details[j]=s[j];
                            s[j]=s[j+1];
                            s[j+1]=details[j];
                        }
                    }
                }
                for(i=0;i<n;i++)
                {
                    printf("Roll no.:%d\n",s[i].roll);
                    printf("Name:%s\n",s[i].name);
                    printf("Mark 1:%d\n",s[i].mark1);
                    printf("mark 2:%d\n",s[i].mark2);
                    printf("mark 3:%d\n",s[i].mark3);
                    printf("Percentage:%f\n",s[i].percent);
                    grade(s[i].percent);
                    printf("\n");
                    
                }
                break;

            case 4:
                printf("Distinction holders are:");
               for(i=0;i<n;i++)
               {
                   if(s[i].percent>=75)
                   {
                       printf("%s\n",s[i].name);
                   }
               }
            break;
            case 5:
                printf("Failed students:");
               for(i=0;i<n;i++)
               {
                   if(s[i].percent<40)
                   {
                       printf("%s\n",s[i].name);
                   }
               }
            break;
        }
        printf("Enter 1 to repeat");
        scanf("%d",&repeat);

    }while(repeat==1);

return 0;
}
