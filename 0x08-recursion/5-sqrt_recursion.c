#include "main.h"	
	/**
	* helperFunction - checks if square root of a number exists
	* @num: number
	* @pSqrt: possible square root of number
	*
	* Return: square root of number display -1 for error
	*/
	int helperFunction(int num, int pSqrt)
	{
	if ((pSqrt * pSqrt) == num)
	{
	return (pSqrt);
	}
	else
	{
	if ((pSqrt * pSqrt) > num)
	return (-1);
	else
	return (helperFunction(num, pSqrt + 1));
	}
	
	}
	
	/**
	* _sqrt_recursion - returns a natural square root of a number
	* @n: number to find square root of
	*
	* Return: square root of n
	* -1 if n does not have a square root
	*/
	int _sqrt_recursion(int n)
	{
	if (n < 0)
	return (-1);
	else
	return (helperFunction(n, 0));
	}
