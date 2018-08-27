#include <JustForRevenge.h>

static IS_OK	define_settings_page(sfRenderWindow *window, sfRectangleShape **rectangle, sfTexture **texture)
{
	sfVector2u numbers = sfRenderWindow_getSize(window);
	sfIntRect rect = {0, 0, numbers.x, numbers.y};
	sfVector2f size = {numbers.x / 2, numbers.y / 1.05};
	sfVector2f move = {numbers.x / 4, 0};
	sfImage *image;
	sfColor color = sfColor_fromRGBA(51, 51, 51, 220);

	image = sfImage_createFromColor(numbers.x / 2, numbers.y / 1.05, color);
	*texture =  sfTexture_createFromImage(image, &rect);
	*rectangle = sfRectangleShape_create();
	sfRectangleShape_setPosition(*rectangle, move);
	sfRectangleShape_setSize(*rectangle, size);
	sfRectangleShape_setTexture(*rectangle, *texture, sfFalse);
	sfRectangleShape_setTextureRect(*rectangle, rect);
	sfRectangleShape_setFillColor(*rectangle, sfRed);
	sfRectangleShape_setOutlineThickness(*rectangle, 0.8);
	sfRectangleShape_setOutlineColor(*rectangle, sfBlack);
	sfImage_destroy(image);
	if (!*texture || !*rectangle)
		return (BAD);
	return (GOOD);
}

IS_OK			load_settings_page(t_game *game)
{
	if (define_settings_page(G_WINDOW, &GRAPHIC.rectangle, &GRAPHIC.t_settings))
		return (BAD);
	return (GOOD);
}
