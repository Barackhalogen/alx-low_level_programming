#include "main.h"
/**
* main - I'm too loving this program
* Description: using the main function and 
* print_last_digit - Prints the last dogit of any value
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
