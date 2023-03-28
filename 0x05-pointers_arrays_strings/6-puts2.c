#include "main.h"
/**
 * Task 6 - prints every other character of a string
 * str will be char to check
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		putchar(str[string]);
	putchar('\n');
}
