//Multiply two numbers of double data type

#include <stdio.h>
int main()
{
    double a, b, product;
    printf("Enter two numbers: ");
    
    // %lf for double data type 
    scanf("%lf %lf", &a, &b);

    //calculating product
    product = a*b;

    // %.2lf displays number up to 2 decimal point 
    printf("Product = %.2lf", product);
    return 0; 
}