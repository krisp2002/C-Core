#include <unistd.h>


/*Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.*/
void ft_putnumber(int n)
{
	if(n > 9)
		ft_putnumber(n/10);
	write(1, &"0123456789"[n%10], 1);
}
int is_space(char c)
{
	if((c >= 9 && c <=13) || c ==32)
		return 1;
	return 0;
}
int ft_atoi(char *s)
{
	int i =0;
	int sgn = 1;
	int res = 0;
	while(is_space(s[i]))
		i ++;
	if(s[i] == '+' || s[i] == '-')
	{
		if(s[i] == '-')
			sgn = -1;
		i ++;
	}
	while(s[i] >= '0' && s[i] <= '9')
	{
		res = res*10 + (s[i] - '0');
		i ++;
	}
	return res*sgn;
}
int is_prime(int n)
{
	int i = 1;
	int count = 0;
	while(i <= n)
	{
		if(n%i == 0)
		{
			count ++;
		}
		i ++;
	}
	if(count == 2)
		return 1;
	return 0;
}
// 2 3 5 7 11 13 17
int main(int ac, char *av[])
{
	if(ac != 2 || av[1][0] == '-')
	{	
		write(1, "0\n", 2);
		return 0;
	}
	int n = ft_atoi(av[1]);
	int sum = 0;
	int i = 0;
	while(i <= n)
	{
		if(is_prime(i))
			sum+= i;
		i ++;
	}
	ft_putnumber(sum);
	return 0;
}