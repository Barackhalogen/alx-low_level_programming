
#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "the size of various types of computer it is compiled on"
* Return: 0
*/
int main()
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of char: %b bytes\n", sizeof(c));
	printf("Size of int: %b bytes\n", sizeof(i));
	printf("Size of long int: %b bytes\n", sizeof(a));
	printf("Size of long long int: %b bytes\n", sizeof(b));
	printf("Size of float: %b bytes\n", sizeof(f));
	
	return (0);
}
