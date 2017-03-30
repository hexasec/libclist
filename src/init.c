/*
** init.c for CLIST in /home/hexa/delivery/clist/src
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Tue Mar 21 10:43:46 2017 HexA
** Last update Thu Mar 30 10:45:48 2017 HexA
*/

#include <stdlib.h>
#include "clist.h"

t_list		*clist_init()
{
  t_list	*output;

  output = malloc(sizeof(t_list));
  if (output != NULL)
  {
    output->start = NULL;
    output->end = NULL;
  }
  return (output);
}
