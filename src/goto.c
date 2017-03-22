/*
** goto.c for CLIST in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Tue Mar 21 13:11:17 2017 HexA
** Last update Wed Mar 22 13:00:27 2017 HexA
*/

#include "clist.h"

void	clist_goto(t_list *list, int pos)
{
  int	i;

  i = 0;
  if (pos <= 0 && (pos == CLIST_START || pos == CLIST_END))
  {
    if (pos == CLIST_START)
      list->list_data = list->list_index->start;
    else
      list->list_data = list->list_index->end;
  }
  else if (pos >= 0 && pos <= clist_len(list))
  {
    clist_goto(list, CLIST_START);
    while (i < pos)
    {
      list->list_data = list->list_data->next;
      i++;
    }
  }
  else
    return ;
}
