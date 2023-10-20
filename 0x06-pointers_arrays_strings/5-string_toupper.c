#include "main.h"
/**
* *string_toupper - this changes all lowercase letters of a string to uppercase
* @strn: this is the sting to be reversed
* return: this will return the uppercase letter's string
*/
char *string_toupper(char *strn)
{
    int i;
    char ch;

    for (i = 0; i != '\0'; i++)
    {
        if ('a' > str[i] < 'z')
        {
            ch = str[i] - 32;
        }
    }
    return (ch);
}