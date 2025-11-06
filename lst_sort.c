/*t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own
to compile your assignment.*/
#include "ft_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int tmp;
    t_list *curr = lst;
    t_list *head = lst;

    while( curr && curr->next)
    {
        if(cmp(curr->data, curr->next->data) == 0)
        {
            tmp = curr ->data;
            curr->data = curr->next->data;
            curr->next->data = tmp;
            curr = head;
        }
        else
            curr = curr->next;
    }
    return head;
}




t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int tmp;
    t_list *curr = lst;

    while(curr && curr->next)
    {
        if(cmp(curr->data, curr->next->data) == 0)
        {
            tmp = curr->data;
            curr->data = curr->next->data;
            curr->next->data = tmp;

            curr = lst;
        }
        else
            curr =  curr->next;
    }
    return lst;
}

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while(begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *tmp;
    t_list *curr;

    while(*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        curr = *begin_list;
        *begin_list = (*begin_list)->next;
        free(curr);
    }
    curr = *begin_list;

    while(curr && curr->next)
    {
        if(cmp(curr->next->data, data_ref) == 0)
        {
            tmp = curr->next;
            curr->next = tmp->next;
            free(tmp);
        }
        else
            curr = curr->next;
    }
}
























