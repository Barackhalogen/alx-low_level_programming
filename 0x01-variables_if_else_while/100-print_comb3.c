#include <stdio.h>
/**
* main - let's keep coding
* Description: using the main function
* this program prints all possible different combinations of two digits
* Return: 0
*/
int main(void)
{
int d;
for (d = 0; d < 100; d++)
{
putchar((d / 10) + '0');
putchar((d % 10) + '0');
if (d != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
