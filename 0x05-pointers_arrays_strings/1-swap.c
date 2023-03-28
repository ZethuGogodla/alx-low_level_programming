#include "main.h"
/**
* Task1- swaps the value of int a and int b
* a is the first int and b is the 2nd int
* Return 0
*/

void swap_int(int *a, int *b)
{
		int z;

		z = *a;
		*a = *b;
		*b = z;
}
