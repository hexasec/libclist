/*
** goto.c for CPE in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Thu Mar 30 11:04:50 2017 HexA
** Last update Thu Mar 30 11:12:13 2017 HexA
*/

#include "clist.h"

t_list_data	*clist_goto(t_list *list, int pos)
{
  int		i;
  t_list_data	*output;

  output = list->start;
  if ((pos <= 0 && pos != CLIST_END) || (pos == CLIST_START))
    return (output);
  else if (pos == CLIST_END)
    return (list->end);
  else
  {
    i = 0;
    while (i < pos)
    {
      output = output->next;
      i++;
    }
    return (output);
  }
}
