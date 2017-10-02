#include "heap.h"


_Bool *seek_position(unsigned int n)
{
	unsigned int i = 0, bufsize = 0, x = 1, j;
	static _Bool buf[16];
	_Bool *bits;

	while (n > (x - 1))
	{
		buf[bufsize] = (n & x) != 0;
		x <<= 1;
		bufsize++;
	}

	bits = malloc(sizeof(_Bool) * bufsize);
	if (bits == NULL)
		return (NULL);

	for (i = 0, j = (bufsize - 1); i < bufsize; i++, j--)
	{
		bits[i] = buf[j];
	}
	return (bits);
}
