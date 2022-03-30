#include "main.h"
int find_sqrt(int n, int x);
/**
 * _sqrt_recursion - Function that returns the factorial of a given number
 * @n: Number to get the square root
 *
 * Return: Square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
		return (find_sqrt(n, 1));
	else
		return (-1);
}

/**
 * get_sqrt - Get the square root recursively
 * @n: Number to get the square root
 * @sqr: Square root of the number
 *
 * Return: Sqaure root of a number.
 */

int find_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x >= n)
		return (-1);

	return (find_sqrt(n, x + 1));
}
