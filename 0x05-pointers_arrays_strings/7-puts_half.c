#include "main.h"
/**
 * Task 7 - prints half of a string
 * str will be char to check
 */
void puts_half(char *str)
{
	int string = 0, n;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		n = (string - 1) / 2;
	else
		n = (string / 2);
	n++;

	for (string = n; str[string] != '\0'; string++)
	putchar(str[string]);
	putchar('\n');
}
