#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;
	unsigned int w;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = malloc(nmemb * size);

	if (y == NULL)
		return (NULL);

	for (w = 0; w < (nmemb * size); w++)
		y[w] = 0;

	return (w);
}
