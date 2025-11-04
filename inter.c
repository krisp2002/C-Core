/* Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.*/
#include <unistd.h>
#include <stdio.h>

int is_printed (char c, char *s, int i)
{
    int j =0;
    while(j< i)
    {
        if(c == s[j])
            return 1;
        j ++;
    }
    return 0;
}

int is_found(char c, char *s)
{
    int i = 0;
    while(s[i])
    {
        if(c == s[i])
            return 1;
        i ++;
    }
    return 0;
}
int main(int ac, char *av[])
{
    if(ac != 3)
    {
        write(1, "\n",1);
        return (0);
    }
    int i = 0;
    while(av[1][i])
    {
        if(is_found(av[1][i], av[2]) && !is_printed(av[1][i], av[2], i))
            write(1,&av[1][i], 1);
        i ++;
    }
}