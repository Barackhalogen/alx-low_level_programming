#include "main.h"
/**
* print_sign - function Checks for -ve, +ve or 0 integers
* @n: This is a number
* Return: 0 if zero, 1 if > 0 and -1 if < 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0')
return (0);
}
