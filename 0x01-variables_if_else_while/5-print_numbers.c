#include <stdio.h>

/**
 *main - assign a random number to the variable, each time it is executed
 *print the last digit of the number stored in the variable n
 *Return: 0
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
printf("%d", n);
}
printf("\n");
return (0);
}
