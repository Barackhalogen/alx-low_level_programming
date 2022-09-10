#include <stdio.h>
/**
* main - ending this in style
* Description: using the main function
* this program prints all possible combinations of two two-digit numbers
* Return: 0
*/
int main(void)
{
int i, o;
for (i = 0; i < 100; i++)
{
for (o = i + 1; o < 100; o++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((o / 10) + '0');
putchar((o % 10) + '0');
if (i == 98 && o == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
