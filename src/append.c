/*
** append.c for CLIST in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Tue Mar 21 11:12:26 2017 HexA
** Last update Thu Mar 30 15:04:38 2017 HexA
*/

#include <stdlib.h>
#include "clist.h"

int		clist_append(t_list *list, void *data)
{
  t_list_data	*new;

  new = malloc(sizeof(t_list_data));
  if (new == NULL)
    return (0);
  if (list == NULL || new == NULL)
    return (CLIST_MALLOC_ERROR);
  new->data = data;
  new->next = NULL;
  if (list->start == NULL)
  {
    list->start = new;
    list->end = new;
  }
  else if (list->start->next == NULL)
  {
    list->start->next = new;
    list->end = new;
  }
  else
  {
    list->end->next = new;
    list->end = new;
  }
  return (CLIST_SUCCESS);
}
