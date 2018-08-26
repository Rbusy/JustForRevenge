#include <JustForRevenge.h>

IS_OK				main(void)
{
	t_game *game;

	if ((game = initialize_game_struct()) == NULL || initialize_window(&(WINDOW)))
		return (ERROR);
	if (load_sprite_scene_one(game))
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
		display_sprite_scene_one(game);
	}
	return (GOOD);
}
