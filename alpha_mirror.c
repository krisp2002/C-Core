#include <unistd.h>

/*Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.*/

int main(int ac, char *av[])
{
	if(ac == 2)
	{
		int i = 0;
		char c;
		while(av[1][i])
		{
			c = av[1][i];
			if(c >= 'A' && c <= 'M')
				c = 'Z' - (c - 'A');
			else if(c >= 'a' && c<= 'm')
				c = 'z' - (c - 'a');
			else if(c >= 'N' && c<= 'Z')
				c = 'A' + ('Z' - c);
			else if(c >= 'n' && c<= 'z')
				c = 'a' + ('z' - c);
			write(1, &c, 1);
			i ++;
		}
	}
	write(1, "\n",1);
	return 0;
}