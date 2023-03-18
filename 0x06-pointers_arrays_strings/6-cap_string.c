#include "main.h"

/**
 * *cap_string - will capitize all word
 * @*c: input value
 *
 * Return: c
*/
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == ' ' || c[i] == '.' || c[i] == '\t')
		{
			i = i + 1;
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = c[i] - 32
		}
	}
	return (c);
}
