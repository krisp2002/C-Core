#include <stdlib.h>
#include <stdio.h>

int is_sep (char c)
{
    if(c == 32 || (c >= 9 && c<= 13))
        return 1;
    return 0;
}

int word_count (char *s)
{
    int i =0;
    int count = 0;
    int word = 0;

    while(s[i])
    {
        if(!is_sep(s[i]))
        {
            if(!word)
            {
                count++;
                word =1;
            }
        }
        else
            word = 0;
        i ++;
    }
    return count;
}

void write_word(char *to, char *from)
{
    int i = 0;
    while(from[i] && !is_sep(from[i]))
    {
        to[i] = from[i];
        i ++;
    }
    to[i] = '\0';
}

void write_array(char **arr, char *s)
{
    int i = 0;
    int j;
    int word =0;

    while(s[i])
    {
        while(is_sep(s[i]))
            i ++;
        j = 0;
        while(s[i +j] && !is_sep(s[i+j]))
            j ++;
        if(j > 0)
        {
            arr[word] = malloc(j+1);
            write_word(arr[word], s+i);
            word++;
        }
        i += j;
    }
}

char **ft_split(char *s)
{
    int count = word_count(s);
    char **arr = malloc(sizeof(char *) * (count + 1));
    arr[count] = NULL;
    write_array(arr, s);
    return arr;
}

int main()
{
    char *s = "this is a test";
    char **arr = ft_split(s);
    int i = 0;
    while(arr[i] != NULL)
    {
        printf("arr[%d] : %s \n", i, arr[i]);
        i ++;
    }
    return 0;
}