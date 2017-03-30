/*
** insert.c for CPE in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Thu Mar 30 14:11:34 2017 HexA
** Last update Thu Mar 30 15:22:10 2017 HexA
*/

#include <stdlib.h>
#include "clist.h"

void		clist_insert(t_list *list, void *data, int pos)
{
  t_list_data	*new;
  t_list_data	*next;
  t_list_data	*prev;

  new = malloc(sizeof(t_list_data));
  if (new == NULL || list == NULL)
    return ;
  new->data = data;
  if ((pos <= 0 && pos != CLIST_END) || pos == CLIST_START)
  {
    next = clist_goto(list, CLIST_START);
    new->next = next;
    list->start = new;
  }
  else if (pos == CLIST_END)
  {
    clist_append(list, data);
    free(new);
  }
  else
  {
    prev = clist_goto(list, pos - 1);
    new->next = prev->next;
    prev->next = new;
  }
}
