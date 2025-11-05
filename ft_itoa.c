/*Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);*/
#include <stdlib.h>
#include <stdio.h>
void put_str(int n, char *s, int i)
{
    if(n > 9)
        put_str(n/10, s, i-1);
    s[i] = "0123456789"[n%10];
}
char *ft_itoa(int nbr)
{
    int i = 0;
    char *num = malloc(13);
    int n = nbr;
    int count = 0;
    while(n != 0)
    {
        count ++;
        n = n/10;
    }
    while(i <=13)
    {
        num[i] = '\0';
        i ++;
    }
    put_str(nbr, num, count);
    return num;
}

int main()
{
    int num = 1234;
    int i =0;
    char *s = ft_itoa(num);
    while(s[i])
    {
        printf("%c", s[i]);
        i++;
    }
    return 0;
}