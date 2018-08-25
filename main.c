#include <JustForRevenge.h>

IS_OK				main(void)
{
	t_game *game;

	if ((game = initialize_game_struct()) == NULL || initialize_window(&(WINDOW)))
		return (ERROR);
	if (define_wallpaper(&(*game).Graphic.wallpaper, &(*game).Graphic.t_wallpaper))
		return (ERROR);

	sfRenderWindow_setFramerateLimit(WINDOW, 60);

	while (sfRenderWindow_isOpen(WINDOW))
	{
		while (sfRenderWindow_pollEvent(WINDOW, &(EVENT)))
		{
			if (EVENT.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
				return (clean_ressource_and_close(game));
		}
		sfRenderWindow_display(WINDOW);
		sfRenderWindow_clear(WINDOW, sfWhite);
		sfRenderWindow_drawSprite(WINDOW, (*game).Graphic.wallpaper, NULL);
	}
	return (GOOD);
}
