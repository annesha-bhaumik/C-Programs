//Simple calculator using printf

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    //Either this one...
    int sum, difference, product, quotient, remainder;
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    remainder=a%b;
    printf("Sum=%d\n", sum);
    printf("Difference=%d\n", difference);
    printf("Product=%d\n", product);
    printf("Quotient=%d\n", quotient);
    printf("Remainder=%d\n", remainder);
    printf("\n\n");
    //or this one...both are correct
    printf("Sum=%d\n", a+b);
    printf("Difference=%d\n", a-b);
    printf("Product=%d\n", a*b);
    printf("Quotient=%d\n", a/b);
    printf("Remainder=%d\n", a%b);
    return 0;
}