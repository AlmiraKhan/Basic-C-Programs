#include<stdio.h>

int add(int ar,int ac,int br,int bc,int mata[5][5],int matb[5][5])
{
    int i,j;
    int result[5][5];
    for(i=0;i<ar;i++)
    {
        for(j=0;j<ac;j++)
        {
            result[i][j]=mata[i][j]+matb[i][j];
        }
    }
    for(i=0;i<ar;i++)
    {
        for(j=0;j<ac;j++)
        {
           printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    
}
int product(int ar,int ac,int br,int bc,int mata[5][5],int matb[5][5])
{
    int sum=0,i,j,k,pdt[5][5];
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
    
     for(i=0;i<ar;i++)
    {
        for(j=0;j<bc;j++)
        {
           printf("%d\t",pdt[i][j]);
        }
        printf("\n");
    }

}
int transpose(int r,int c,int mata[5][5])
{
    int i,j;
    printf("The transpose is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",mata[j][i]);
        }
        printf("\n");
    }

}


int main()
{
    int i,j,n,r,c,repeat,ar,ac,br,bc,mata[5][5],matb[5][5];
    do
    {
        printf("Enter\n(2) sum of matrices\n(3) product matrices\n(4) transpose of matrix\n");
        scanf("%d",&n);
        if(n==2 || n==3)
        {
            printf("Enter the no. of rows and columns of Matrix A: ");
            scanf("%d %d",&ar,&ac);
            printf("Enter the no. of rows and columns of Matrix B: ");
            scanf("%d %d",&br,&bc);

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
        }
        switch(n)
        {
            case 2:
                //for sum
                if(ar==br && ac==bc)
                {
                    add(ar,ac,br,bc,mata,matb);
                }
                else
                    printf("Enter matrices of same order!");
                break;

            case 3:
                //for product
                if(ac==br)
                {
                    product(ar,ac,br,bc,mata,matb);
                }
                else
                    printf("matrix multiplication is not possible!");
                break;
            case 4:
                //for transpose
                printf("Enter the rows and columns of Matrix: ");
                scanf("%d %d",&r,&c);

                printf("Enter the values for matrix:\n");
                for(i=0;i<r;i++)
                {
                    for(j=0;j<c;j++)
                    {
                        printf("Enter value for position [%d][%d]:",i+1,j+1);
                        scanf("%d",&mata[i][j]);
                        
                    }
                }
                printf("The original matrix is:\n");
                for(i=0;i<r;i++)
                {
                    for(j=0;j<c;j++)
                    {
                        printf("%d\t",mata[i][j]);
                        
                    }
                    printf("\n");
                }
                transpose(r,c,mata);
                break;
            default:
                printf("Enter valid operation!");
        }
        printf("Enter 1 to repeat");
        scanf("%d",&repeat);
    }while(repeat==1);
    return 0;
}