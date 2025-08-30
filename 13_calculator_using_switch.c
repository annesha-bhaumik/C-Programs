//Calculator using switch case

#include<stdio.h>
int main()
{
    char c;
    int a,b;
    printf("Enter the operation to be performed: ");
    scanf("%c",&c);
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    switch(c)
    {
        case '+':
        printf("The sum is %d",a+b);
        break;

        case '-':
        printf("The difference is %d",a-b);
        break;

        case '*':
        printf("The product is %d",a*b);
        break;

        case '/':
        printf("The quotient is %d",a/b);
        break;

        default:
        printf("Wrong input");
    }
    return 0;
}