#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _str_concat - this  returns a pointer to a newly allocated space in memory,
 * which contains the new string
 * @s1: this is the first string
 * @s2: this is the second string
 * Return: this will return the pointer to the concatenated string
 * and null if the concatenation fails
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len1 = strlen(s1 - 1);
	int len2 = strlen(s2);
	int length = len1 + len2;

	ptr = (char*)malloc(length * sizeof(char));

	for (i = 0; i < len1; i++)
	{
		ptr[i] = str[i]
	}
	for (j = 0; j < len2; j++)
	{
		ptr[i] = s1[i];
	}
	
}














