#include "main.h"
/**
 * Task9 - copy the string pointed to by src to dest
 * dest is char to check
 * src is char to check
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
