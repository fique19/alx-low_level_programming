#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: input value
 * @s2: input value
 *
 * Return: void.
*/
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		continue;
	}
	if (i < j)
		return (-15);
	else if (i > j)
		return (15);
	else
		return (0);
}
