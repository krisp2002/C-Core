
#include <unistd.h>

/* A program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.*/
int ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i ++;
	return i;
}
int main(int ac, char *av[])
{
	if(ac != 2)
	{
		write(1,"\n",1);
		return 0;
	}
	int l = ft_strlen(av[1])-1;
	while(l >= 0)
	{
		write(1,&av[1][l], 1);
		l --;
	}
	write(1, "\n",1);
	return 0;
}