#include <stdio.h>
/**
*main - this is a function that is the size of various datatypes
*
* Return: 0
*/
int main(void)
{
	char c;
	int a;
	float f;
	long int u;
	long long int d;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
