/*
** init.c for CLIST in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Tue Mar 21 10:43:46 2017 HexA
** Last update Wed Mar 22 12:51:14 2017 HexA
*/

#include <stdlib.h>
#include "clist.h"

t_list		*clist_init()
{
  t_list	*output;

  output = malloc(sizeof(t_list));
  output->list_data = malloc(sizeof(t_list_data));
  output->list_index = malloc(sizeof(t_list_index));
  output->list_data->next = NULL;
  output->list_index->start = NULL;
  output->list_index->end = NULL;
  return (output);
}
