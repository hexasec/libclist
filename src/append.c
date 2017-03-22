/*
** append.c for CLIST in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Tue Mar 21 11:12:26 2017 HexA
** Last update Wed Mar 22 12:59:10 2017 HexA
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
  if (list->list_index->start == NULL)
  {
    list->list_index->start = new;
    list->list_index->end = new;
  }
  else if (list->list_index->start->next == NULL)
  {
    list->list_index->start->next = new;
    list->list_index->end = new;
  }
  else
  {
    list->list_index->end->next = new;
    list->list_index->end = new;
  }
  return (CLIST_SUCCESS);
}
