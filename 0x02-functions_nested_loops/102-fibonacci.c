#include <stdio.h>
/**
* main - Coding weet die, I wan code enter UK Insha Allah
* Description: using the main function, this program prints
* the first 50 Fibonacci numbers, starting with 1 and 2
* Return: 0
*/
int main(void)
{
long int n1 = 1, result, n2 = 2, nLast = 50;
int i;
printf("%lu, %lu, ", n1, n2);
for (i = 2; i < nLast; i++)
{
result = n1 + n2;
n1 = n2;
n2 = result;
printf("%lu", result);
if (i != nLast - 1)
printf(", ");
}
printf("\n");
return (0);
}
