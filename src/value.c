/*
** value.c for CPE in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Thu Mar 30 11:14:12 2017 HexA
** Last update Thu Mar 30 11:39:31 2017 HexA
*/

#include "clist.h"

void		*clist_value(t_list *list, int pos)
{
  t_list_data	*output;

  output = clist_goto(list, pos);
  return (output->data);
}
