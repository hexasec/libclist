/*
** free.c for CLIST in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Tue Mar 21 13:18:27 2017 HexA
** Last update Thu Mar 30 15:18:43 2017 HexA
*/

#include <stdio.h>
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
    printf("%s\n", del->data);
    tmp = tmp->next;
    free(del);
  }
  free(list);
}
