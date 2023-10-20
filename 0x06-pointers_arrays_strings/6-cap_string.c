#include "main.h"
/**
* string_toupper - this changes all first letters of a word to uppercase
* @strn: this is the sting to be converted to uppercase
* Return: this will return the string with the first letter of words as uppercase
*/
char *cap_string(char *strn)
{
	int i;
    int j;

    char special_chars[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; strn[i] != '\0'; i++)
	{
        for (j = 0; j < 10; j++)
        {
	        if (strn[i] == special_chars[j])
	        {
                if ('a' <= strn[i + 1] && strn[i + 1] <= 'z')
                {
		            strn[i + 1] = strn[i + 1] - 32;
                }
	        }
        }
	}
	return (strn);
}