#include "main.h"
/**
 * _putchar - Entry block
 * Description: prints _putchar on new line
 * Return: 0
 */
int _putchar(char c)
{
	char c[9] = "_putchar";

	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
