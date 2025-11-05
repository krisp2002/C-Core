#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
    int n;
    int len = 0;
    int sgn = 0;
    
    if(nbr < 0)
    {
        sgn = 1;
        nbr = -nbr;
    }
    n = nbr;
    while(n != 0)
    {
        len ++;
        n /= 10;
    }
    int size = len+sgn;
    char *rev = malloc(size +1);
    int i = 0;
    if(sgn)
    {
        rev[i] = '-';
        i ++;
    }
    rev[size] = '\0';
    while(size >= i)
    {
        rev[size--] = nbr%10 + '0';
        nbr = nbr/10;
    }
    return rev;
}

int main()
{
    int n = -1234;
    printf("%s", ft_itoa(n));
    return 0;
}
