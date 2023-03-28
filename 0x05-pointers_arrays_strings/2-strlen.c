#include "main.h"
/**
 * Task2 - return the length of a string
 * z: char to check
 *Return:0 
 */
int _strlen(char *z)
{
	int a = 0;

	for (; *z++;)
		a++;
	return (a);
}
