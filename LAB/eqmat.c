#include<stdio.h>
int main()
{
    int mata[50][50],matb[50][50],i,j,ra,ca,rb,cb;
    printf("Check if matrices are equal or not\n");
    printf("-------------------------------------\n");

    printf("Enter the number of rows and columns for matrix A:");
    scanf("%d %d",&ra,&ca);
    printf("Enter Matrix A:\n");
    for(i=0;i<ra;i++)
    {
        for(j=0;j<ca;j++)
        {
            printf("Enter element[%d][%d]:",i,j);
            scanf("%d",&mata[i][j]);
        }
    }
    printf("Enter the number of rows and columns for matrix B:");
    scanf("%d %d",&rb,&cb);
    if(ra==rb && ca==cb)
    {
        printf("Enter Matrix B:\n");
        for(i=0;i<rb;i++)
        {
            for(j=0;j<cb;j++)
            {
                printf("Enter element[%d][%d]",i,j);
                scanf("%d",&matb[i][j]);
            }
        }
        
        for(i=0;i<ra;i++)
        {
            for(j=0;j<ca;j++)
            {
                if(mata[i][j]!=matb[i][j])
                    break;
                  
            }
        }
        if(i==ra && j==ca)
        printf("The matrices are equal");
        else
        printf("The matrices are not equal");

    }
    else
        printf("The matrices are not equal");

    
return 0;
}