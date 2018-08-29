SRC_DIR=	./src/

SRC=		main.c										\
			$(SRC_DIR)animate_scene_one.c				\
			$(SRC_DIR)close_game.c						\
			$(SRC_DIR)create_window.c					\
			$(SRC_DIR)display_scene.c					\
			$(SRC_DIR)display_scene_one.c				\
			$(SRC_DIR)display_settings.c				\
			$(SRC_DIR)do_event.c						\
			$(SRC_DIR)do_event_scene_one.c				\
			$(SRC_DIR)f_applyMusic.c					\
			$(SRC_DIR)f_applySprite.c					\
			$(SRC_DIR)initialize_game_struct.c			\
			$(SRC_DIR)load_characters.c					\
			$(SRC_DIR)load_first_scene.c				\
			$(SRC_DIR)load_settings.c					\
			$(SRC_DIR)move.c							\
			$(SRC_DIR)move_characters.c					\
			$(SRC_DIR)window_display_and_clear.c		\

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


