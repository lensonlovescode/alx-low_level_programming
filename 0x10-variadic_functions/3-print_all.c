#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - prints all 4 datatypes
* @format: format striing
*/
void print_all(const char * const format, ...)
{
	unsigned int j, start;
	va_list list;
	char *ptr;

	j = 0;
	start = 0;
	va_start(list, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(list, int));
			break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(list, double));
			break;
		case's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			ptr = va_arg(list, char*);
			if (ptr)
			{ printf("%s", ptr);
			break; }
			printf("%p", ptr);
			break; }
		j++; }
	printf("\n");
	va_end(list); }
