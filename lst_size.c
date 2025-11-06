/*Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;*/
#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
t_list *create(void *data)
{
    t_list *new = malloc(sizeof(t_list *));
    new->data = data;
    new->next = NULL;
    return new;
}
int	ft_list_size(t_list *begin_list)
{
    int count = 0;
    while(begin_list)
    {
        count ++;
        begin_list = begin_list->next;
    }
    return count;
}

int main()
{
    int a = 1, b=2, c=3, d=4;
    t_list *head = create(&a);
    head->next = create(&b);
    head->next->next = create(&c);
    head->next->next->next = create(&d);
    printf("%d", ft_list_size(head));
}