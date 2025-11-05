/* Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.*/
#include <unistd.h>
int is_sep (char c)
{
    if (c == 32 || (c>= 9 && c<=13))
        return 1;
    return 0;
}
void to_lowercase(char *c)
{
    int i =0;
    while(c[i])
    {
        if(c[i] >= 'A' && c[i] <= 'Z')
            c[i] += 32;
        i++;
    }
}
void capitalize(char *s)
{
    int i =0;
    int word = 0;
    while(s[i])
    {
        if(!is_sep(s[i]))
        {
            if(!word)
            {
                if(s[i] >= 'a' && s[i] <= 'z')
                    s[i] -= 32;
                word = 1;
            }
        }
        else
            word = 0;
        i ++;
    }
}

int main(int ac, char *av[])
{
    if(ac == 1)
    {
        write(1, "\n",1);
        return 0;
    }
    int i = 1;
    int j = 0;
    while(av[i])
    {
        to_lowercase(av[i]);
        i ++;
    }
    i =1;
    while(av[i])
    {
        capitalize(av[i]);
        i ++;
    }
    i =1;
        while(av[i])
    {
        j = 0;
        while(av[i][j])
        {
            write(1, &av[i][j], 1);   
            j ++;
        }

        i ++;
    }
}