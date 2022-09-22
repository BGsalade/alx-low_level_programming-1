#include "main.h"
/**
 *_strncat - concatenate two strings inputting number of bytes
 *@dest: string to append upon
 *@src: string to complete the end of dest
 *@n: integer parameter to compare index
 *Return: new concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	
	int index = 0, dest_len = 0;
	
	while (dest[index++])
		dest_len++;
	
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	
	return (dest);

}
