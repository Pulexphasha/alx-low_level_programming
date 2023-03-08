#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer x
 * @y: integer y
 * Return: pow recursion
 */

int _pow_recursion(int x, int y)

{
	int even;

	if (y < 0) /*if y is a negative number, return -1*/
	return (-1);
	else if (y == 0) /*x to the power of 0 is 1*/
	return (1);
	else if (y % 2 == 0) /*if y is an even number*/
	{
	even = _pow_recursion(x, y / 2);
	return (even * even);
	}
	else /*if y is an odd number*/
	return (x * _pow_recursion(x, y - 1));
}	
