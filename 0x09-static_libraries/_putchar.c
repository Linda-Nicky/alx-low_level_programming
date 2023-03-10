#include "main.h"
#include <unistd.h>
/**
 * _putchar - to write the character c to the stdout
 * @c: the character to be printed 
 *
 * Return: 1 0n success
 * on error, -1 is returned and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
