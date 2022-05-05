#include <stdio.h>
int Fibonacci(int);
int main()
{
   int n, i;
   printf("Enter the number of elements:");
   scanf("%d",&n);
   printf("Fibonacci series\n");

   for ( i=0 ; i< n ; i++ )
   {
      printf("%d ", Fibonacci(i));
      
   }

   return 0;
}

int Fibonacci(int n)
{
   if ( n == 0 || n==1 )
      return n;
   
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}