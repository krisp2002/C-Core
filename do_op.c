#include <stdio.h>
#include <stdlib.h>
/*Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int. */

int main(int ac, char *av[])
{
	if(ac == 4)
	{
		int a = atoi(av[1]);
		int b = atoi(av[3]);
		char s = av[2][0];
		if(s == '+')
			printf("%d", a+b);
		else if(s == '-')
			printf("%d", a-b);
		else if(s == '*')
			printf("%d", a*b);
		else if(s == '/')
			printf("%d", a/b);
		else if(s == '%')
			printf("%d", a%b);

	}
	printf("\n");
}