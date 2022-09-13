#include "main.h"
/**
* main - Hello, are you happy while coding
* Description: using the main function
* this program prints 10 times the alphabet, in lowercase
* Return: Nothing (Null, void)
*/
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
i++;
}
}
