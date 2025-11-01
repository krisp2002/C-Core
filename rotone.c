#include <unistd.h>
/*Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.*/
int main(int ac, char*av[])
{
	if(ac == 2)
	{
		int i = 0;
		while(av[1][i])
		{
			if(av[1][i] >= 'A' && av[1][i] < 'Z')
				av[1][i] += 1;
			else if(av[1][i] >= 'a' && av[1][i] < 'z')
				av[1][i] += 1;
			else if(av[1][i] == 'z')
				av[1][i] = 'a';
			else if(av[1][i] == 'Z')
				av[1][i] = 'A';
			write(1, &av[1][i],1);
			i ++;
		}
	}
	write(1,"\n",1);
	return 0;
}