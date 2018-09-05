#include <JustForRevenge.h>

IS_OK	setPositionText(sfText *text, sfRenderWindow *window, float a, float b)
{
	sfVector2u numbers = sfRenderWindow_getSize(window);
	sfVector2f move;

	if (numbers.x == 0 || numbers.y == 0)
		return (BAD);
	move.x = numbers.x / 2 - a;
	move.y = numbers.y / 2 + b;
	sfText_setPosition(text, move);
	return (GOOD);
}

IS_OK	setPositionSprite(sfSprite *button, sfRenderWindow *window, float a, float b)
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

IS_OK	moveSprite(sfSprite *sprite, float a, float b)
{
	sfVector2f offset;

	offset.x = a;
	offset.y = b;
	sfSprite_move(sprite, offset);
	return (GOOD);
}
