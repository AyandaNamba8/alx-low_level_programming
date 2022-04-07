#include "main.h"	
	/**
	* _memcpy - copies n bytes from memory src to dest.
	* @src: pointer to source string.
	* @dest: pointer to destination.
	* @n: number of bytes to copied.
	*
	* Return: dest
	*/
	char *_memcpy(char *dest, char *src, unsigned int n)
	{
	unsigned int counter;
	
	for (counter = 0; counter < n; counter++)
	{
	dest[counter] = src[counter];
	}
	return (dest);
	}
