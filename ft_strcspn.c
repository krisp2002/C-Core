#include <unistd.h>
/*Reproduce exactly the behavior of the function strcspn
(man strcspn).*/

int is_in_reject(char c, const char *r)
{
	int i = 0;
	while(r[i])
	{
		if (c == r[i])
			return 1;
		i ++;
	}
	return 0;
}
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	while(s[i])
	{
		if(is_in_reject(s[i], reject))
			break;
		i ++;
	}
	return i;
}