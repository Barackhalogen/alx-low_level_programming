#include <stdio.h>
/**
* main - Oya start to dey code boy
* Description: using the main function
* this program prints the alphabet in lowercase
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
