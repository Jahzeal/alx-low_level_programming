#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point to the function that is printing out a quote
 *Decription: alx should take it easy
 *Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
