#include<stdio.h>
struct details
{
    char name[50];
    int id,salary;
}e[50];
int main()
{
    int n,i,maxsal=e[0].salary,flag;
   
    printf("Employee details\n");
    printf("----------------\n");
    printf("Enter the number of employees:");
    scanf("%d",&n);
    printf("Enter the details below\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the name of Employee no.%d:",i+1);
        scanf("%s",e[i].name);
        printf("Enter his/her ID no.:");
        scanf("%d",&e[i].id);
        printf("Enter his/her salary:");
        scanf("%d",&e[i].salary);
    }
    
    for(i=0;i<n;i++)
    {
        if(e[i].salary>maxsal)
        {
            flag=i;
        }
    }
   printf("Employee details with maximum salary\n");
   printf("Name:%s\n",e[flag].name);
   printf("ID no.:%d\n",e[flag].id);
   printf("Salary:%d",e[flag].salary);
   
return 0;
}