//print an array

#include <stdio.h>
int main()
{
   int n,i;
   printf("Enter the number of elements: ");
   scanf("%d",&n);
   int a[n];
   printf("Enter the elements of array: "); 
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   printf("The array is: ");
   for(i=0;i<n;i++)
   {
    printf("%d ",a[i]);
   }
   return 0;
}