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

static IS_OK	apply_music(sfMusic **music, char *str)
{
	*music = sfMusic_createFromFile(str);
	if (!*music)
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

static IS_OK	define_settings_page(sfRenderWindow *window, sfRectangleShape **rectangle)
{
	sfVector2u numbers = sfRenderWindow_getSize(window);
	sfIntRect rect = {0, 0, numbers.x, numbers.y};
	sfVector2f size = {numbers.x / 2, numbers.y / 1.05};
	sfVector2f move = {numbers.x / 4, 0};
	sfImage *image;
	sfTexture *texture;
	sfColor color = sfColor_fromRGBA(51, 51, 51, 220);

	image = sfImage_createFromColor(numbers.x / 2, numbers.y / 1.05, color);
	texture =  sfTexture_createFromImage(image, &rect);
	*rectangle = sfRectangleShape_create();
	sfRectangleShape_setPosition(*rectangle, move);
	sfRectangleShape_setSize(*rectangle, size);
	sfRectangleShape_setTexture(*rectangle, texture, sfFalse);
	sfRectangleShape_setTextureRect(*rectangle, rect);
	sfRectangleShape_setFillColor(*rectangle, sfRed);
	sfRectangleShape_setOutlineThickness(*rectangle, 0.8);
	sfRectangleShape_setOutlineColor(*rectangle, sfBlack);
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
	define_settings_page(G_WINDOW, &GRAPHIC.rectangle);
	return (GOOD);}

void			display_sprite_scene_one(t_game *game)
{
	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.background, NULL);
	sfRenderWindow_drawRectangleShape(G_WINDOW, GRAPHIC.rectangle, NULL);
	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.play_button, NULL);
}

