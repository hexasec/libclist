/*
** free.c for CLIST in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Tue Mar 21 13:18:27 2017 HexA
** Last update Thu Apr 13 10:28:23 2017 HexA
*/

#include <stdlib.h>
#include "clist.h"

void		clist_free(t_list *list, void (*my_free)(t_list_data *))
{
  t_list_data	*tmp;
  t_list_data	*del;

  tmp = list->start;
  while (tmp != NULL)
  {
    del = tmp;
    tmp = tmp->next;
    if (my_free == NULL)
      free(del);
    else
      my_free(del);
  }
  free(list);
}
