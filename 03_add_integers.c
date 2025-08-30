//Add two user defined integers

#include<stdio.h>
int main()
{
    int number1, number2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    //calculate the sum
    sum= number1 + number2;
    printf("The sum of the numbers is %d", sum);
    return 0;
}