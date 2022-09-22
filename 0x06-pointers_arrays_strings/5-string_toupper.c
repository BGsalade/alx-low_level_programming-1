#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @str: pointer to char params
 *
 * Return: address to string
 */

char *string_toupper(char *str)
{
int i = 0;

for (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
i++;
}
return (str);
}
