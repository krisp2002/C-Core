
#include <stdlib.h>
#include <stdio.h>
/*Reproduce the behavior of the function strdup (man strdup).*/
char    *ft_strdup(char *src)
{
	int i = 0;
	char *s2;
	while(src[i])
	{
		i ++;
	}
	s2 = malloc(i);
	if(!s2)
		return NULL;
	i = 0;
	while(src[i])
	{
		s2[i] = src[i];
		i ++;
	}
	s2[i] = '\0';
	return s2;
}

int main()
{
	char s[] = "Krista";
	char *s2 = ft_strdup(s);
	printf("%s", s2);
}