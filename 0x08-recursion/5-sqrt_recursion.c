#include "main.h"
/**
 * find_sqrt - Helper function to find the square root
 * @n: The number for which to find the square root
 * @guess: The current guess for the square root
 * @prev_guess: The previous guess for the square root
 * Return: The square root of n, or -1 for an error
 */
int find_sqrt(int n, int guess, int prev_guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number for which to find the square root
 * Return: The square root of n, or -1 for an error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(n, 1, 0));
}

/**
 * find_sqrt - Helper function to find the square root
 * @n: The number for which to find the square root
 * @guess: The current guess for the square root
 * @prev_guess: The previous guess for the square root
 * Return: The square root of n, or -1 for an error
 */
int find_sqrt(int n, int guess, int prev_guess)
{
	int new_guess = (n / guess + guess) / 2;

	if (new_guess == prev_guess)
		return (guess);

	return (find_sqrt(n, new_guess, guess));
}
