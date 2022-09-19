#include "main.h"

/**
*swap_int - Function that swap the values of two integers
*@a: Integer 1
*@b: integer 2
*Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
