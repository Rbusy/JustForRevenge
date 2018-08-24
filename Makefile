SRC=		main.c

OBJ=		$(SRC:.c=.o)

NAME=		JustForRevenge

CFLAGS=		-Wall -Wextra -I ./include/ -l c_graph_prog

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		$(RM) -f $(OBJ)

fclean:		clean
		$(RM) -f $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re


