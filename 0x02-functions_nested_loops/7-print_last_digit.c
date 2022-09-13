#include "main.h"
/**
* print_last_digit - this function prints the last digit of a number
* @n: this is an integer, a real number
* Return: Last value of digit
*/
int print_last_digit(int n)
{
int last = n % 10;
if (n < 0)
last *= -1;
_putchar(last + '0');
return (last);
}
