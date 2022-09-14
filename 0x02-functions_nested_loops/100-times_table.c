#include "main.h"
/**
* print_times_table - this program Prints the times table
* @n: the number which the times table will be printed
* Return: void
*/
void print_times_table(int n)
{
int a = 0, product, b;
if (n < 0 || n > 15)
return;
while (a <= n)
{
for (b = 0; b <= n; b++)
{
product = a * b;
if (b == 0)
_putchar('0' + product);
else if (product < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + product);
}
else if (product < 100)
{
_putchar (' ');
_putchar('0' + product / 10);
_putchar('0' + product % 10);
}
else
{
_putchar('0' + product / 100);
_putchar('0' + (product - 100) / 10);
_putchar('0' + product % 10);
}
if (b < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
a++;
}
}
