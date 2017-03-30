/*
** len.c for CLIST in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Wed Mar 22 12:21:01 2017 HexA
** Last update Thu Mar 30 10:59:53 2017 HexA
*/

#include <stdlib.h>
#include "clist.h"

int		clist_len(t_list *list)
{
  int		output;
  t_list_data	*tmp;

  output = 0;
  tmp = list->start;
  while (tmp != NULL)
  {
    output++;
    tmp = tmp->next;
  }
  return (output - 1);
}
