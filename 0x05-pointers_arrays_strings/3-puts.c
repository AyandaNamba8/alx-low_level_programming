#include "main.h"	
	/**
	* _puts - displays string followed by new line.
	* @str: pointer to string.
	*
	* Return: void.
	*/
	void _puts(char *str)
	{
	int i;
	
	i = 0;
	while (*str != '\0')
	{
	_putchar(*str);
	i++;
	str++;
	}
	_putchar('\n');
	}
