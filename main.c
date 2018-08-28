#include <JustForRevenge.h>

IS_OK				main()
{
	t_game *game;

	if ((game = initialize_game_struct()) == NULL)
		return (ERROR);

	if (initialize_window(&(G_WINDOW)))
		return (clean_ressource_and_close(game, ERROR));
	if (load_res_scene_one(game))
		return (clean_ressource_and_close(game, ERROR));
	if (load_settings_page(game))
		return (clean_ressource_and_close(game, ERROR));
	if (load_characters(game))
		return (clean_ressource_and_close(game, ERROR));

	sfRenderWindow_setFramerateLimit(G_WINDOW, 60);
	sfRenderWindow_setMouseCursorVisible(G_WINDOW, sfFalse);
	sfMusic_play(AUDIO.music_scene_one);
	sfMusic_setVolume(AUDIO.music_scene_one, 1);

	while (sfRenderWindow_isOpen(G_WINDOW))
	{
		while (sfRenderWindow_pollEvent(G_WINDOW, &(G_EVENT)))
		{
			if (G_EVENT.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
				return (clean_ressource_and_close(game, GOOD));
			if (sfKeyboard_isKeyPressed(sfKeyRight) || sfKeyboard_isKeyPressed(sfKeyLeft)) {
				WINDOW.play_or_settings += 1;
				if (WINDOW.play_or_settings == 2)
					WINDOW.play_or_settings = 0;
			}
		}
		sfRenderWindow_display(G_WINDOW);
		sfRenderWindow_clear(G_WINDOW, sfBlack);
		display_scene(game);
	}
	return (clean_ressource_and_close(game, GOOD));
}
