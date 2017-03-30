/*
** main.c for CLIST in /home/hexa/delivery/clist
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Tue Mar 21 10:39:14 2017 HexA
** Last update Thu Mar 30 15:21:35 2017 HexA
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
  int	i;
  clist	*list;
  t_list_data	*d;

  i = 0;
  list = clist_init();
  clist_append(list, "arnaud");
  clist_append(list, "boulay");
  clist_append(list, "club");
  clist_insert(list, "start", CLIST_START);
  clist_insert(list, "end", CLIST_END);
  clist_insert(list, "fan", 3);
  clist_free(list);
  return (0);
}
