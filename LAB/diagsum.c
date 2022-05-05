#include<stdio.h>
int main()
{
    int r,c,mat[50][50],i,j,sum=0;   
    printf("Finding the sum of main diagonal and off diagonal elements\n");
    printf("----------------------------------------------------------\n");

    printf("Enter number of rows and columns:");
    scanf("%d %d",&r,&c);

    if(r==c)
    {
    printf("Enter matrix elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element [%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    //adding diagonal elements
    for(i=0;i<r;i++)
    {
        sum=sum+mat[i][i];
    }
    printf("The sum of main diagonal elements is %d\n",sum);
    sum=0;
    //adding off-diagonal elements
    for(i=c-1,j=0;i>=0,j<c;i--,j++)
    {
        sum=sum+mat[j][i];
    }
    printf("The sum of off-diagonal elements is %d",sum);
    }
    else
        printf("Enter a square matrix!");
    return 0;



}