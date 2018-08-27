#include <JustForRevenge.h>

IS_OK				main(void)
{
	t_game *game;

	if ((game = initialize_game_struct()) == NULL || initialize_window(&(G_WINDOW)))
		return (ERROR);
	if (load_res_scene_one(game))
		return (ERROR);

	sfRenderWindow_setFramerateLimit(G_WINDOW, 60);
	sfRenderWindow_setMouseCursorVisible(G_WINDOW, sfFalse);
	sfMusic_play(AUDIO.music_scene_one);
	sfMusic_setVolume(AUDIO.music_scene_one, 1);

	while (sfRenderWindow_isOpen(G_WINDOW))
	{
		while (sfRenderWindow_pollEvent(G_WINDOW, &(G_EVENT)))
		{
			if (G_EVENT.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
				return (clean_ressource_and_close(game));
		}
		sfRenderWindow_display(G_WINDOW);
		sfRenderWindow_clear(G_WINDOW, sfBlack);
		display_sprite_scene_one(game);
	}
	return (GOOD);
}
