//Check whether the character is upper case, lower case or special character

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if((ch>='A')&&(ch<='Z'))
    {
        printf("It's upper case");
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("It's lower case");
    }
    else
    printf("It's special character");
    return 0;
}