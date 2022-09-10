#include <stdio.h>
/**
* main - coding exercise
* Description: using the main function
* this program prints all possible different combinations of two digits
* Return: 0
*/
int main(void)
{
int c;
for (c = '0'; c <= '100'; c++)
{
putchar((c / 10) + '0');
putchar((c % 10) + '0');
if (c != '99')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
