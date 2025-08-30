//Add the corresponding elements of two arrays of different lengths

#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("Enter the length of first array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of first array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the length of second array:");
    scanf("%d",&m);
    int b[m];
    printf("Enter the elements of second array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    j=n>m?n:m;
    int c[j];
    for(i=0;i<j;i++)
    {
        if(i<n && i<m)
        c[i]=a[i]+b[i];
        else if(i>=n)
        c[i]=b[i];
        else if(i>=m)
        c[i]=a[i];
    }
    printf("The sum is:");
    for(i=0;i<j;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}