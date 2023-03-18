#include "main.h"

/**
 * *leet - encodes string to 1337
 * @c: input value
 *
 * Return: c
*/
char *leet(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == 'a' || c[i] == 'A')
			c[i] = 52;
		else if (c[i] == 'e' || c[i] == 'E')
			c[i] = 51;
		else if (c[i] == 'o' || c[i] == 'O')
			c[i] = 48;
		else if (c[i] == 't' || c[i] == 'T')
			c[i] = 55;
		else if (c[i] == 'l' || c[i] == 'L')
			c[i] = 49;
	}
	return (c);
}
