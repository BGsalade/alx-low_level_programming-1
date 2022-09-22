#include "main.h"

/**
 *_strcat - function concatenates two strings
 *end of the string pointed to by @dest
 *@dest: String to append to upon
 *@src: String to concatenated upon
 *
 *Return: return value of dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
