#include "main.h"
/**
 * print_array - check the code for each element
 * @a: is the array
 * @n: is the lot
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
