#include <JustForRevenge.h>

t_game				*initialize_game_struct(void)
{
	t_game *new = malloc(sizeof(*new));

	if (!new)
		return (NULL);
	return (new);
}

IS_OK			initialize_window(sfRenderWindow **window)
{
	sfVideoMode video = {1980, 1080, 32};

	*window = sfRenderWindow_create(video, "JustForRevenge", sfFullscreen, NULL);
	if (!*window)
		return (BAD);
	return (GOOD);
}
