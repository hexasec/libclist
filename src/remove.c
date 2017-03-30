/*
** remove.c for CPE in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Thu Mar 30 11:39:53 2017 HexA
** Last update Thu Mar 30 15:05:23 2017 HexA
*/

#include <stdlib.h>
#include "clist.h"

void		clist_remove(t_list *list, int pos)
{
  t_list_data	*cur;
  t_list_data	*next;
  t_list_data	*prev;

  if ((pos <= 0 && pos != CLIST_END) || pos == CLIST_START)
  {
    next = clist_goto(list, 1);
    free(list->start);
    list->start = next;
  }
  else if (pos == CLIST_END)
  {
    prev = clist_goto(list, clist_len(list) - 1);
    prev->next = NULL;
    free(list->end);
    list->end = prev;
  }
  else
  {
    prev = clist_goto(list, pos - 1);
    cur = clist_goto(list, pos);
    next = clist_goto(list, pos + 1);
    prev->next = next;
    free(cur);
  }
}
