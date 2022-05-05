#include<stdio.h>
int main()
{
    int i,j,k,ac,ar,bc,br,sum=0;
    int mata[50][50],matb[50][50],pdt[50][50];
    printf("Product of two matrices\n");
    printf("-----------------------\n");

    printf("Enter the rows and columns of Matrix A: ");
    scanf("%d %d",&ar,&ac);
    printf("Enter the rows and columns of Matrix B: ");
    scanf("%d %d",&br,&bc);

    if(ac!=br)
    printf("No. of columns of Matrix A should be equal to rows of Matrix B!");
    else
    {
        printf("Enter the values for matrix A:\n");
        for(i=0;i<ar;i++)
        {
            for(j=0;j<ac;j++)
            {
                printf("Enter value for position [%d][%d]:",i+1,j+1);
                scanf("%d",&mata[i][j]);
                
            }
        }
        printf("Enter the values for matrix B:\n");
        for(i=0;i<br;i++)
        {
            for(j=0;j<bc;j++)
            {
                printf("Enter value for position [%d][%d]:",i+1,j+1);
                scanf("%d",&matb[i][j]);
                
            }
        }
        //multiplication
        for(i=0;i<ar;i++)
        {
            for(j=0;j<bc;j++)
            {
                for(k=0;k<br;k++)
                {
                    sum=sum+mata[i][k]*matb[k][j];
                }
                pdt[i][j]=sum;
                sum=0;
            }
        }
        printf("The product matrix is:\n");
        for(i=0;i<ar;i++)
        {
            for(j=0;j<bc;j++)
            {
                printf("%d\t",pdt[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}