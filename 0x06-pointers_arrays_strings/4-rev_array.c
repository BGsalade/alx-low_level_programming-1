#include "main.h"

/**
 * reverse_array - reverse
 *@a: array
 *@n : number of elements
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
int i;
int j;
int tmp;

i = 0;
j = n - 1;

while (i < j)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
i++;
j--;
}
}
