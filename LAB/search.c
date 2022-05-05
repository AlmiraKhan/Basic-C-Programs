#include <stdio.h>
int search(int *arr, int n, int item);
int main()
{
  int arr[50];
  int n,i, key, position;
  
  printf("Enter array size: ");
  scanf("%d", &n);
  printf("Enter elements of array:\n ");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

  printf("Enter key element: ");
  scanf("%d", &key);
  position= search(arr, n, key);
  if(position == -1)
     printf("%d does not exists in the array", key);
  else
     printf("%d is found at position %d .", key, position+1);
  return 0;
}

int search(int *arr, int n, int item)
{
  int i;
  for (i=0;i<n;i++)
  {
    if (*(arr+i) == item)
    {
      return i;
    }
  }
  return -1;
}