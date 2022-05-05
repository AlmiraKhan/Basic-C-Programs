#include<stdio.h>
int main()
{
    int r,c,mat[50][50],i,j;   
    printf("Transpose of a Matrix\n");
    printf("---------------------\n");

    printf("Enter number of rows and columns:");
    scanf("%d %d",&r,&c);

    printf("Enter the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The original matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mat[i][j]);
            
        }
        printf("\n");
    }
    printf("The transpose is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}