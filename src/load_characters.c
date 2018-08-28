#include <JustForRevenge.h>

static	IS_OK	define_character(sfSprite **sprite, sfTexture **texture, sfClock **clock)
{
	sfIntRect rect = {0, 0, 318, 670};

	if (applySprite(sprite, texture, "./res/Character/mov_droite.png", 318, 2154))
		return (BAD);
	*clock = sfClock_create();
	sfSprite_setTextureRect(*sprite, rect);
	return (GOOD);
}

IS_OK			load_characters(t_game *game)
{
	if (define_character(&GRAPHIC.characters, &GRAPHIC.t_characters, &SYSTEM.clock_animate))
		return (BAD);
	return (GOOD);
}
