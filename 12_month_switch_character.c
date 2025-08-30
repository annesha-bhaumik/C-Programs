//Using switch case to determine the month

#include<stdio.h>
int main()
{
    char m;
    printf("Enter the character: ");
    scanf("%c",&m);

    switch(m)
    {
        case 'a':
        printf("January");
        break;

        case 'b':
        printf("February");
        break;
        
        case 'c':
        printf("March");
        break;
        
        case 'd':
        printf("April");
        break;


        case 'e':
        printf("May");
        break;


        case 'f':
        printf("June");
        break;


        case 'g':
        printf("July");
        break;


        case 'h':
        printf("August");
        break;


        case 'i':
        printf("September");
        break;


        case 'j':
        printf("October");
        break;


        case 'k':
        printf("November");
        break;


        case 'l':
        printf("December");
        break;


        default:
        printf("INVALID !!!");
        break;
    }
    return 0;
}