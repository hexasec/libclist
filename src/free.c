/*
** free.c for CLIST in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Tue Mar 21 13:18:27 2017 HexA
** Last update Wed Mar 22 15:44:01 2017 HexA
*/

#include <stdio.h>
#include <stdlib.h>
#include "clist.h"

void		clist_free(t_list *list)
{
  int		i;

  i = clist_len(list);
  while (i >= 0)
  {
    clist_remove(list, i);
    i--;
  }
  //free(list->list_data);
  free(list->list_index);
  free(list);
}
