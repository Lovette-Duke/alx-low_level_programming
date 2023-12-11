#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: will be any number which it absolute value would me computed
 * Return: an integer
 */

int _abs(int i)
{
	if (i < 0)
	{
		int n = i * -1;

		return (n);
	}
	return (i);
}
