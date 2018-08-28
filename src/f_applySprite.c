#include <JustForRevenge.h>

IS_OK	applySprite(sfSprite **sprite, sfTexture **texture, char *str, int a, int b)
{
	const sfIntRect rect = {0, 0, a, b};

	*sprite = sfSprite_create();
	*texture = sfTexture_createFromFile(str, (&rect));
	sfSprite_setTexture(*sprite, *texture, sfFalse);
	if (!*sprite || !*texture)
		return (BAD);
	return (GOOD);
}
