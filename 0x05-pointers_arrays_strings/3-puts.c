#include "main.h"

/**
* _puts - prints a string to stdout
* @str: string to be printed
* Return: void
*/
void _puts(char *str)
{
int tr;

for (tr = 0; *(str + tr) != '\0'; tr++)
putchar(*(str + tr));
putchar('\n');
}
