#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting strring
 */
char *add_strings(char *num1, char *num2, char *r, int *r_index)
{
	int num, tens = 0;

	for(; *num1 && *num2, num1-- , num2--, r_index--)
	{
		num = (*num1 - '0') + (*num2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for(; *num1, num1--, r_index--)
	{
		num = (*num1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for(; *num2, num2--, r_index--)
	{
		num = (*num2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	

}