#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two numbers @a and @b
 * @a: input 1
 * @b: input 2
 * Return: Sum of @a and @b
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - Calculates the difference of @a and @b
 * @a: input 1
 * @b: input 2
 * Return: Difference of @a and @b
 */

int op_sub(int a, int b)

{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers @a and @b
 * @a: input 1
 * @b: input 2
 * Return: Product of @a and @b
 */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div - Divides @a by @b
 * @a: input 1
 * @b: input 2
 * Return: Result of the division of @a by @b without remainder
 */

int op_div(int a, int b)

{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Calculates the remainder of @a divided by @b
 * @a: input 1
 * @b: input 2
 * Return: Remainder of @a divider by @b
 */

int op_mod(int a, int b)

{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
