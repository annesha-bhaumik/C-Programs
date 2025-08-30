//Print a 2D array

#include<stdio.h>
int main()
{
int r,c,i,j;
printf("Enter number of rows: ");
scanf("%d",&r);
printf("Enter number of coloumns: ");
scanf("%d",&c);
int a[r][c];
printf("Enter the elements: ");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("The array is:\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
return 0;
}