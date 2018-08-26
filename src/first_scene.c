#include <JustForRevenge.h>

static IS_OK	applySprite(sfSprite **sprite, sfTexture **texture, char *str, int a, int b)
{
	const sfIntRect rect = {0, 0, a, b};

	*sprite = sfSprite_create();
	*texture = sfTexture_createFromFile(str, (&rect));
	sfSprite_setTexture(*sprite, *texture, sfFalse);
	if (!*sprite || !*texture)
		return (BAD);
	return (GOOD);
}

static IS_OK	define_wallpaper(sfSprite  **wallpaper, sfTexture **t_wallpaper)
{
	if (applySprite(wallpaper, t_wallpaper, "./res/Wallpaper/Wallpaper.jpg", 1980, 1080))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_play_button(sfSprite **button, sfTexture **t_button)
{
	if (applySprite(button, t_button, "./res/Play_button/Play.png", 197, 240))
		return (BAD);
	return (GOOD);
}

IS_OK			load_sprite_scene_one(t_game *game)
{
	if (define_wallpaper(&(*game).Graphic.background, &(*game).Graphic.t_background))
		return (BAD);
	if (define_play_button(&(*game).Graphic.play_button, &(*game).Graphic.t_play_button))
		return (BAD);
	return (GOOD);
}

void			display_sprite_scene_one(t_game *game)
{
	sfRenderWindow_drawSprite(WINDOW, (*game).Graphic.background, NULL);
	sfRenderWindow_drawSprite(WINDOW, (*game).Graphic.play_button, NULL);
}

