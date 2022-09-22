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
int i = 0, j = 0;

while (dest[i++])
j++;
for (i = 0; src[i] && i < n; i++)
dest[j++] = src[i];
return (dest);
}
