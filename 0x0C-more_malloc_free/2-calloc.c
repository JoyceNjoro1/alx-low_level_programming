#include "main.h"
#include <stdlib.h>

/**
  * _calloc - ...
  * @nmemb: number of members
  * @size: size
  *
  * Return: ...
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *d;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	d = malloc(l);

	if (d == NULL)
		return (NULL);

	while (i < l)
	{
		d[i] = 0;
		i++;
	}

	return (d);
}
