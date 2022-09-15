#include <stdio.h>
#include "main.h"
/**
* print_line - this function prints a straight line
* @n: is an integer, a parameter
* Return: null
*/
void print_line(int n)
{
while (n-- > 0)
{
_putchar('_');
}
_putchar('\n');
}
