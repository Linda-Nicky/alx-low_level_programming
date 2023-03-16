#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: function parameter
 * @size: func para
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		pt[nmemb] = 0;
	return ((void *)pt);
}
