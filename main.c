#include <JustForRevenge.h>

IS_OK				main()
{
	t_game *game;

	if (initialize_game_struct(&game))
		return (ERROR);
	if (create_window(&(G_WINDOW)))
		return (clean_ressource_and_close(game, ERROR));
	if (load_res_scene_one(game))
		return (clean_ressource_and_close(game, ERROR));
	if (load_settings_page(game))
		return (clean_ressource_and_close(game, ERROR));
	if (load_characters(game))
		return (clean_ressource_and_close(game, ERROR));

	while (sfRenderWindow_isOpen(G_WINDOW))
	{
		while (sfRenderWindow_pollEvent(G_WINDOW, &(G_EVENT)))
			if (do_event(game))
				return (clean_ressource_and_close(game, GOOD));
		window_display_and_clear(G_WINDOW);
		display_scene(game);
	}
	return (clean_ressource_and_close(game, GOOD));
}
