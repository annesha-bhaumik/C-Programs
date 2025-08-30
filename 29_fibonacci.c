//Fibonacci series using recursion

#include<stdio.h>
int fibo(int n);
int main()
{
    int x,i;
    printf("Enter the number of values: ");
    scanf("%d",&x);
    printf("Fibonacci series: ",x);
    for(i = 0;i<x;i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}
int fibo(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return (fibo(n-1) + fibo(n-2));
    }
}