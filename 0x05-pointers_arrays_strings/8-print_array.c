#include "main.h"
#include <stdio.h>
/**
 * Task8- prints n element of an array of integers
 * a is int to check
 * n is int to check
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
printf("\n");
}
