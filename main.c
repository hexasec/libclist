/*
** main.c for CLIST in /home/hexa/delivery/clist
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Tue Mar 21 10:39:14 2017 HexA
** Last update Wed Mar 22 17:02:05 2017 HexA
*/

#include <stdio.h>
#include <stdlib.h>
#include "clist.h"

typedef struct	s_pos
{
  int	x;
  int	y;
}		t_pos;

int	main()
{
  t_pos	*pos;
  t_pos	*print;
  clist	*list;

  pos = malloc(sizeof(t_pos));
  pos->x = 1;
  pos->y = 2;
  list = clist_init();
  clist_append(list, pos);
  pos = malloc(sizeof(t_pos));
  pos->x = 2;
  pos->y = 1;
  clist_append(list, pos);
  //clist_append(list, "xptdr");
  //clist_append(list, "arnaud boulay");
  //clist_remove(list, CLIST_END);
  clist_goto(list, CLIST_START);
  while (list->list_data !=  NULL)
  {
    print = list->list_data->data;
    printf("%d %d\n", print->x, print->y);
    list->list_data = list->list_data->next;
  }
  clist_free(list);
  return (0);
}
