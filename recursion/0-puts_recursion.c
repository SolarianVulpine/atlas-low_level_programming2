#include "main.h"

/**
* _puts_recursion- recursively put a string
*
* @s: the provided string
*
* Returns: nothing
*
*/

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');

}
