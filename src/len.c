/*
** len.c for CLIST in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Wed Mar 22 12:21:01 2017 HexA
** Last update Wed Mar 22 12:34:54 2017 HexA
*/

#include <stdlib.h>
#include "clist.h"

int		clist_len(t_list *list)
{
  int		output;
  t_list	*tmp;

  output = 0;
  tmp = list;
  clist_goto(tmp, CLIST_START);
  while (tmp->list_data != NULL)
  {
    output++;
    tmp->list_data = tmp->list_data->next;
  }
  return (output - 1);
}
