#include<stdio.h>
int add(int [],int []);
int main()
{
    int a[5],b[5],sum[5],da,db;
    int i,n;
    printf("Enter the degree of polynomial 1:");
    scanf("%d",&da);
    printf("Enter the coefficients of polynomial 2 in decreasing order of degree");
    for(i=0;i<=da;i++)
        scanf("%d",&a[i]);
    printf("Enter the degree of polynomial 2:");
    scanf("%d",&db);
    printf("Enter the coefficients of polynomial 1 in decreasing order of degree");
    for(i=0;i<=db;i++)
        scanf("%d",&b[i]);
    add(a,b);
}
int add(int a[],int b[])
{
    
}