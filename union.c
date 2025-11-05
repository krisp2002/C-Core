#include <unistd.h>

int is_written(char c, int i, char *s)
{
    int j = 0;
    while(j < i)
    {
        if(c == s[j])
            return 1;
        j ++;
    }
    return 0;
}
int main(int ac, char *av[])
{
    if(ac != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    int i = 0;
    while(av[1][i])
    {
        if(!is_written(av[1][i], i, av[1]))
            write(1, &av[1][i], 1);
        i ++;
    }
    i = 0;
    int len = 0;
    while(av[1][len])
        len ++;
    while(av[2][i])
    {
        if(!is_written(av[2][i], i, av[2]) && !is_written(av[2][i], len, av[1]))
            write(1, &av[2][i], 1);
        i ++;
    }

    write(1, "\n", 1);
    return 0;
}