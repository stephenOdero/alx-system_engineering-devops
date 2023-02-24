#include <ctype.h>
/**
  * My main.h header file
  * Description - a function that checks whether
  * the character entered is upper or otherwise
  *
*/

/**
  * _isupper: My function
  * Description: a function that checks for uppercase letters
  * Return: 1 if uppercase and 0 if otherwise
*/

int _isupper(int c)
{
	int return_value;
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
