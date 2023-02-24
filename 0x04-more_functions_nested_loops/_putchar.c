#include <unistd.h>

/**
  * _putchar - writes the character c to stdout
  I @c: The character to print
  *Return: On success 1
  * On Error, -1 is returned, adnd errno is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
