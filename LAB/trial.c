#include<stdio.h>
int main()
{
    int mat[8][8],r,c,i,j,temp,sort[8][8];
    printf("Enter number of rows and columns:");
    scanf("%d %d",&r,&c);
    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    //temp=mat[0][0];
    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            if(mat[i][j]>mat[i][j+1])
            {
                temp=mat[i][j];
                mat[i][j]=mat[i][j+1];
                mat[i][j+1]=temp;
                

            }
            
        }
        
    }
    printf("\nThe new matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }





}