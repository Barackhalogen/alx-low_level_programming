#include "main.h"
/**
* main - I believe I can code
* description: Using the main function
* this program prints a function that checks for lowercase character
* Return: 1 if lowercase, else 0
*/
int _islower(int c)
{
if ((c >= 1) && (c <= 26))
{
return (1);
}
return (0);
}
