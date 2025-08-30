//Computing area of circle by defining pi as a global variable

#include <stdio.h>
float pi=3.14;
int main()
{
    int r;
    printf("Enter the value of radius of the circle: ");
    scanf("%d",&r);
    float area= pi*r*r;
    printf("The area of the circle is %f sq. units", area);
    return 0;
}