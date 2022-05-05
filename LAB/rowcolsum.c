#include<stdio.h>
int main()
{
    int i,j,mat[50][50],r,c,rSum=0,cSum=0;
    printf("Find the sum of each row and column of a matrix\n");
    printf("-------------------------------------------------\n");

    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);

    printf("Enter matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element[%d][%d]",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    //sum of rows
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            rSum=rSum+mat[i][j];
        }
        printf("The sum of row %d is %d\n",i,rSum);
        rSum=0;
    }
    //sum of columns
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cSum=cSum+mat[j][i];
        }
        printf("The sum of column %d is %d\n",i,cSum);
        cSum=0;
    }
    return 0;

}