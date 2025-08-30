//Factorial using function

#include<stdio.h>
int fact(int n);
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Factorial of the number: %d",fact(x));
    return 0;
}
int fact(int n)
{
    int a;
    if(n==0)
    return 1;
    else
    a=n*fact(n-1);
    return a;
}