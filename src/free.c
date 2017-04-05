/*
** free.c for CLIST in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Tue Mar 21 13:18:27 2017 HexA
** Last update Wed Apr 05 10:48:24 2017 HexA
*/

#include <stdlib.h>
#include "clist.h"

void		clist_free(t_list *list)
{
  t_list_data	*tmp;
  t_list_data	*del;

  tmp = list->start;
  while (tmp != NULL)
  {
    del = tmp;
    tmp = tmp->next;
    free(del);
  }
  free(list);
}
