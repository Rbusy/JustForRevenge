#include <JustForRevenge.h>

IS_OK			initialize_window(sfRenderWindow **window)
{
	sfVideoMode video = {1980, 1080, 32};

	*window = sfRenderWindow_create(video, "JustForRevenge", sfDefaultStyle, NULL);
	if (!*window)
		return (BAD);
	return (GOOD);
}

IS_OK			define_wallpaper(sfSprite  **wallpaper, sfTexture **t_wallpaper)
{
	const sfIntRect rect = {0, 0, 1980, 1080};

	*wallpaper = sfSprite_create();
	*t_wallpaper = sfTexture_createFromFile("./res/Wallpaper/Wallpaper.jpg", (&rect));
	sfSprite_setTexture(*wallpaper, *t_wallpaper, sfFalse);
	if (!*wallpaper)
		return (BAD);
	return (GOOD);
}

t_game				*initialize_game_struct(void)
{
	t_game *new = malloc(sizeof(*new));

	if (!new)
		return (NULL);
	return (new);
}

IS_OK				clean_ressource_and_close(t_game *game)
{
	sfRenderWindow_close(WINDOW);
	sfTexture_destroy((*game).Graphic.t_wallpaper);
	sfSprite_destroy((*game).Graphic.wallpaper);
	sfRenderWindow_destroy(WINDOW);
	free(game);
	return (GOOD);
}

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
