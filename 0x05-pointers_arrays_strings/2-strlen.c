#include "main.h"

/**
*_strlen - Function the return the length of a string
*@s: String
*Return: the length as integer
*/

int _strlen(char *s)
{
	int length;

	for (length = 0; *s; s++)
		length++;

	return (length);
}
