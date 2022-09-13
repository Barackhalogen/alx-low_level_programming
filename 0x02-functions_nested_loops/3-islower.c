#include "main.h"
/**
* main - Coding is an art
* Description: using the main function
* this program prints lowercase ASCII character
* function _islower - Check for lowercase ASCII characters
* Return: 0 if not lowercase, 1 if lowercase
*/
int _islower(int c)
{
if ((c >= 97) && (c <= 122))
{
return (1);
}
return (0);
}
