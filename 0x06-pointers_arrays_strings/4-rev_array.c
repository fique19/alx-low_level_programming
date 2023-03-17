#include "main.h"

/**
 * reverse_array - reverses an integer array
 * @a: input value
 * @n: input value
 *
 * Return: void.
*/
void reverse_array(int *a, int n)
{
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = a[n - i - 1];
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = arr[i];
	}
