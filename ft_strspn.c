#include <unistd.h>

int is_in_acc(char c, const char *a)
{
	int i =0;
	int found = 0;
	while(a[i])
	{
		if(c == a[i])
			return 1;
		i ++;
	}
	return 0;
}
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	int count = 0;
	while(s[i])
	{
		if(!is_in_acc(s[i], accept))
			break;
		i ++;
	}
	return i; 
}