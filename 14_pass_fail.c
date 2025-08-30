//Check whether one is passed or failed using if-else

#include<stdio.h>
int main()
{
    int t,p;
    printf("Enter the marks in theory: ");
    scanf("%d",&t);
    printf("Enter the marks in practical: ");
    scanf("%d",&p);
    if(t>=40)
    {
        printf("Passed in theory\n");
    }
    else
    printf("Failed in theory\n");
    if(p>=50)
    {
        printf("Passed in practical\n");
    }
    else
    printf("Failed in practical\n");
    return 0;
}