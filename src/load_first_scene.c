#include <JustForRevenge.h>

static IS_OK	apply_music(sfMusic **music, char *str)
{
	*music = sfMusic_createFromFile(str);
	if (!*music)
		return (BAD);
	return (GOOD);
}

static IS_OK	define_wallpaper(sfSprite  **wallpaper, sfTexture **t_wallpaper)
{
	if (applySprite(wallpaper, t_wallpaper, "./res/Wallpaper/Wallpaper2.jpg", 1980, 1080))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_play_button(sfSprite **button, sfTexture **t_button)
{
	if (applySprite(button, t_button, "./res/Play_button/Play2.png", 158, 151))
		return (BAD);
	return (GOOD);
}

static IS_OK	move_play_button(sfSprite *button, sfRenderWindow *window, int a, int b)
{
	sfVector2u numbers = sfRenderWindow_getSize(window);
	sfVector2f move;

	if (numbers.x == 0 || numbers.y == 0)
		return (BAD);
	move.x = numbers.x / 2 - (a);
	move.y = numbers.y / 2 + (b);
	sfSprite_setPosition(button, move);
	return (GOOD);
}

IS_OK			load_res_scene_one(t_game *game)
{
	if (define_wallpaper(&GRAPHIC.background, &GRAPHIC.t_background))
		return (BAD);
	if (define_play_button(&GRAPHIC.play_button, &GRAPHIC.t_play_button))
		return (BAD);
	if (apply_music(&AUDIO.music_scene_one, "./res/Musique/musique1.ogg"))
		return (BAD);
	if (move_play_button(GRAPHIC.play_button, G_WINDOW, 125, 142))
		return (BAD);
	return (GOOD);
}
