#include "main.h"
/**
* main - This is big, check out
* Description: using the main function
* this program prints ASCII characters
* _isalpha - Check for alphabet characters
* Return: 0 if not an alphabet, 1 if an alphabet
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
return (0);
}
