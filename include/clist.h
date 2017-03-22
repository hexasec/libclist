/*
** clist.h for CLIST in /home/hexa/delivery/clist/include
** 
** Made by HexA
** Login   <hexa@epitech.net>
** 
** Started on  Tue Mar 21 10:39:43 2017 HexA
** Last update Wed Mar 22 12:47:43 2017 HexA
*/

#ifndef CLIST_H_
# define CLIST_H_

# define CLIST_SUCCESS		(1)
# define CLIST_MALLOC_ERROR	(84)
# define CLIST_START		(0)
# define CLIST_END		(-1)

typedef struct		s_list_data
{
  void			*data;
  struct s_list_data	*next;
}			t_list_data;

typedef struct		s_list_index
{
  struct s_list_data	*start;
  struct s_list_data	*end;
}			t_list_index;

typedef struct		s_list
{
  t_list_data		*list_data;
  t_list_index		*list_index;
}			t_list;

typedef t_list clist;

t_list		*clist_init();
int		clist_append(t_list *list, void *data);
int		clist_len(t_list *list);
void		clist_goto(t_list *list, int pos);
void		clist_remove(t_list *list, int pos);
void		clist_free(t_list *list);

#endif /* CLIST_H_ */
