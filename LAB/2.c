#include<stdio.h>
int sum(int*,int);
int main()
{
   int a[20],n;
   int i;
   
   printf("Enter the number of elements: ");
   scanf("%d",&n);

   printf("Enter array elements :");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);

   printf("Sum of array elements: %d",sum(a,n));

}
int sum(int *a,int x)
{
   int i,result=0;
   
   for(i=0;i<x;i++)
   {
      result= result + *a;
      a++;
   }
   return result;
}