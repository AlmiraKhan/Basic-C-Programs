#include<stdio.h>
int main()
{
    int r,c,mat[50][50],i,j;   
    printf("Upper triangular matrix\n");
    printf("-----------------------\n");

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
    //printing upper triangular matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<=j)
            {
                printf("%d\t",mat[i][j]);
            }
            else
                printf("0\t");
        }
        printf("\n");
    }
    return 0;

}