/*
** remove.c for CLIST in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Wed Mar 22 10:23:43 2017 HexA
** Last update Wed Mar 22 12:47:21 2017 HexA
*/

#include <stdlib.h>
#include "clist.h"

void		clist_remove(t_list *list, int pos)
{
  t_list_data	*next;

  if (pos == CLIST_START)
  {
    next = list->list_index->start->next;
    free(list->list_index->start);
    list->list_index->start = next;
    return ;
  }
  else if (pos == CLIST_END)
  {
    clist_goto(list, clist_len(list) - 1);
    list->list_data->next = NULL;
    free(list->list_index->end);
    list->list_index->end = list->list_data;
    return ;
  }
  clist_goto(list, pos + 1);
  next = list->list_data;
  clist_goto(list, pos);
  free(list->list_data);
  clist_goto(list, pos - 1);
  list->list_data->next = next;
}
