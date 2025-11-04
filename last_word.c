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
int word_count(char *str)
{
    int count = 0;
    int word = 0;
    int i =0;
    while(str[i])
    {
        if(!is_space(str[i]) && word == 0)
        {
            count++;
            word = 1;
        }
        else
            word = 0;
        i ++;
    }
    return count;
}
int main(int ac, char *av[])
{
    if(ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    
    
}