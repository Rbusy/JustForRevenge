#include <JustForRevenge.h>

IS_OK			initialize_window(sfRenderWindow **window)
{
	sfVideoMode video = {1980, 1080, 32};

	*window = sfRenderWindow_create(video, "JustForRevenge", sfDefaultStyle, NULL);
	if (!*window)
		return (BAD);
	return (GOOD);
}

IS_OK			define_wallpaper(sfSprite  **wallpaper)
{
	const sfTexture *texture;
	const sfIntRect rect = {0, 0, 1980, 1080};

	*wallpaper = sfSprite_create();
	texture = sfTexture_createFromFile("./res/Wallpaper/Wallpaper.jpg", (&rect));
	sfSprite_setTexture(*wallpaper, texture, sfFalse);
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

IS_OK				main(void)
{
	t_game *game;

	if ((game = initialize_game_struct()) == NULL || initialize_window(&(WINDOW)))
		return (ERROR);
	if (define_wallpaper(&(*game).Graphic.wallpaper))
		return (ERROR);

	sfRenderWindow_setFramerateLimit(WINDOW, 60);

	while (sfRenderWindow_isOpen(WINDOW))
	{
		while (sfRenderWindow_pollEvent(WINDOW, &(EVENT)))
		{
			if (EVENT.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
				sfRenderWindow_close(WINDOW);
		}
		sfRenderWindow_display(WINDOW);
		sfRenderWindow_clear(WINDOW, sfWhite);
		sfRenderWindow_drawSprite(WINDOW, (*game).Graphic.wallpaper, NULL);
	}
	return (GOOD);
}
