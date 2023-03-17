#include <stdio.h>
/**
 * main -print sizes of data types in C
 * The owner is zethu
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %ln byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %ln byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %ln byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %ln byte(S)\n", (unsigned long)sizeof(d));
	printf("Siza of a float: %ln byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
