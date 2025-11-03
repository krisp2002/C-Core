/*Write a function that reverses (in-place) a string.

It must return its parameter.*/
#include <stdio.h>
#include <stdlib.h>
char    *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    while(str[i])
        i ++;
    char *rev = malloc(i+1);
    while(i > 0 )
    {
        rev[j] = str[i-1];
        i --;
        j ++;
    }
    rev[j] = '\0';
    return rev;

}
int main()
{
    char str[] = "krista";
    char *str2= ft_strrev(str);
    printf("%s", str2);
}