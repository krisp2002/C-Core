#include <unistd.h>

/*Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.*/

int is_prime(int);
int main(int ac, char *av[])
{
	if(ac != 2 || av[1][0] == '-')
	{	
		write(1, "0\n", 2);
		return 0;
	}

	
}