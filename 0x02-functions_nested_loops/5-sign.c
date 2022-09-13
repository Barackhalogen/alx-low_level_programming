#include "main.h"
/**
* main - I dey code my guy
* Description: using the main function and print_sign function
* this program Checks for -ve, +ve or 0 integers
* Result: 0 if zero, 1 if > 0 and -1 if < 0
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
_putchar('0');
return (0);
}
