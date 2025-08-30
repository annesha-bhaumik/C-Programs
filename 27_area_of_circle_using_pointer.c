//determining area of circle using pointer

#include<stdio.h>
int main()
{
    //r=radius of circle, a=area of circle
    float r, a;
    float *pr, *pa;

    //&r and &a are the memory addresses of r and a respectively
    pr=&r;
    pa=&a;
    printf("Enter the radius of the circle: ");
    scanf("%f", pr); //as pr=&r
    *pa= 3.14*(*pr)*(*pr);
    printf("Area of the circle is %f square units", *pa);
    return 0;
}