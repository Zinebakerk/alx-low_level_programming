#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @a: data type integer
 * Return: absolute value of @a
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
