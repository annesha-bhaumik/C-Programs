//Computing area of square, rectangle, triangle

#include <stdio.h>
int main()
{
    int a,l,w,b,h;

    printf("Enter the value of the arm of the square: ");
    scanf("%d",&a);
    printf("The area of the square is %d\n", a*a);

    printf("Enter the value of the length of the rectangle: ");
    scanf("%d",&l);
    printf("Enter the value of the width of the rectangle: ");
    scanf("%d",&w);
    printf("The area of the rectangle is %d\n", l*w);

    printf("Enter the value of the base of the triangle: ");
    scanf("%d",&b);
    printf("Enter the value of the height of the triangle: ");
    scanf("%d",&h);
    printf("The area of the triangle is %f", 0.5*b*h);

    return 0;
}