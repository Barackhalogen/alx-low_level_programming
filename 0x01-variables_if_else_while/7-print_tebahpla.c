#include <stdio.h>
/**
* main - coding is art
* Description: using the main function
* this program prints the lowercase alphabet in reverse
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}
