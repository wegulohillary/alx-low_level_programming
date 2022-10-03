#include "main.h"
/**
 * _puts - print string followed by new line
 * @str: string to print
 */
void _puts(char *s)
{
	while (*s)
	  _putchar(*s++);
        _putchar('\n');
}
