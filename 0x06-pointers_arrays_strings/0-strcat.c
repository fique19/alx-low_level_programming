#include 'main.h'

/**
 * _strcat - concatenates two strings
 *@dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int l, n;

	for (n = 0; dest[n] != '\0'; n++)
	{
		continue;
	}
	for (l = 0; src[l] != '\0'; l++)
	{
		dest[n] = src[l];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
