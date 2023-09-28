#include "main.h"
/**
 * set_bit - set a bit at a given index to 1
 * @n: the pointer of the number to be  changed
 * @index: the bit index to set to 1
 * Return: 1 if successfull, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
