##
## Makefile for CLIST in /home/hexa/delivery/clist
## 
## Made by HexA
## Login   <hexa@epitech.net>
## 
## Started on  Tue Mar 21 10:36:36 2017 HexA
## Last update Wed Mar 22 15:43:21 2017 HexA
##

CC	=	gcc

CFLAGS	=	-W -Wall -Werror -Wextra -I include/

RM	=	rm -rf

SRC	=	main.c		\
		src/init.c	\
		src/append.c	\
		src/goto.c	\
		src/remove.c	\
		src/len.c	\
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
