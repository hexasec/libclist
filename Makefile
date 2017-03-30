##
## Makefile for CLIST in /home/hexa/delivery/clist
## 
## Made by HexA
## Login   <hexa@epitech.net>
## 
## Started on  Tue Mar 21 10:36:36 2017 HexA
## Last update Thu Mar 30 14:59:51 2017 HexA
##

CC	=	gcc

CFLAGS	=	-g3 -I include/

RM	=	rm -rf

SRC	=	main.c		\
		src/init.c	\
		src/len.c	\
		src/append.c	\
		src/insert.c	\
		src/goto.c	\
		src/value.c	\
		src/remove.c	\
		src/free.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	clist

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
