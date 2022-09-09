#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Starts coding my friend
* Description: prints a program that prints the alphabet in lowercase
* Return: Always 0 (Success)
*/
int main(void)
{
char love;
for (love = 'a', love <= 'z', love++)
putchar(love);
putchar('\n');
return (0);
}
