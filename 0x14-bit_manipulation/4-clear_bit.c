#include "main.h"
/**
 * clear_bit - set the value of a given bit to 0
 * @n: a pointer to the number to be changed
 * @index: the index of the bit to be cleared
 * Return: 1 on  success, -1 for otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
