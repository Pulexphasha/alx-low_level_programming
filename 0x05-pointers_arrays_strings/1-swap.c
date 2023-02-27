#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: this is the first integer to be swapped.
 * @b: this is the second integer to be swapped.
 * Return: nothing
 */

void swap_int(int *a, int *b)

{
	int temp = *a;

	*a = *b;
	*b = temp;
}
