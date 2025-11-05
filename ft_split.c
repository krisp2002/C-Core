#include <stdlib.h>
#include <stdio.h>
int is_sep(char c)
{
    if((c >= 9 && c<=13) || c == 32)
        return 1;
    return 0;
}

int count_word(char *s)
{
    int i = 0;
    int word = 0;
    int count =0;

    while(s[i])
    {
        if(!is_sep(s[i]))
        {
            if(!word)
            {
                word = 1;
                count ++;
            }
        }
        else
            word =0;
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

void write_array(char **arr, char *str)
{
    int i =0;
    int j;
    int word =0;

    while(str[i])
    {
        while(is_sep(str[i]))
            i ++;
        j = 0;
        while(str[i+j] && !is_sep(str[i+j]))
            j++;
        
        if(j > 0)
        {
            arr[word] = (char *)malloc(j+1);
            write_word(arr[word], str+i);
            word ++;
        }
        i += j;
    }
}

char **ft_split(char *str)
{
    int count = count_word(str);
    char **arr = (char **)malloc(sizeof(char *) * (count+1));
    arr[count] = NULL;
    write_array(arr, str);
    return arr;
}

int main()
{
    char *str = "Krista this is a test";
    char **arr = ft_split(str);

    int i = 0;
    while(arr[i] != NULL)
    {
        printf("arr[%d] = %s \n", i, arr[i]);
        free(arr[i]);
        i ++;
    }
}