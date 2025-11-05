/*Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or there are no words, display a newline.
*/
#include <unistd.h>
int is_space(char c)
{
    if((c >= 9 && c<= 13) || c == 32)
        return 1;
    return 0;
}

int ft_strlen(char *str)
{
    int i =0;
    while(str[i])
        i ++;
    return i;
}
int main(int ac, char *av[])
{
    if(ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    int end = ft_strlen(av[1]) -1;
    int start =  ft_strlen(av[1]) -1;
    while(is_space(av[1][start]))
    { 
          start --;
          end --;
    }
    while(!is_space(av[1][start]) && start >= 0)
        start --;
    start++;
    while(start <= end)
    {
        write(1, &av[1][start], 1);
        start ++;
    }
    write(1, "\n",1);
    return 0;
}