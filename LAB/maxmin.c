#include<stdio.h>
int main()
{
   int arr[100],n,i,max,min;
   printf("Enter the no.of elements in the array: ");
   scanf("%d",&n);

   printf("Enter %d elements of array: ",n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

   max=arr[0];
   min=arr[0];

   for(i=1;i<n;i++)
   {
       if(arr[i]>max)
           max=arr[i];
       if(arr[i]<min)
           min=arr[i];  
   }
   
   printf("The maximum element is %d",max);
   printf("\nThe minimum element is %d",min);

   return 0;

}