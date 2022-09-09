#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* Main - Starts the coding from here
* Description: prints the alphabet in lowercase, and then in uppercase
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
