##
## Makefile for CLIST in /home/hexa/delivery/clist
## 
## Made by HexA
## Login   <hexa@epitech.net>
## 
## Started on  Tue Mar 21 10:36:36 2017 HexA
## Last update Wed Apr 05 10:49:32 2017 HexA
##

CC	=	gcc

CFLAGS	=	-I include/

RM	=	rm -rf

SRC	=	src/init.c	\
		src/len.c	\
		src/append.c	\
		src/insert.c	\
		src/goto.c	\
		src/value.c	\
		src/remove.c	\
		src/free.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libclist.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
