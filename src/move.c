#include <JustForRevenge.h>

IS_OK	move_text(sfText *text, sfRenderWindow *window, int a, int b)
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

IS_OK	move_sprite(sfSprite *button, sfRenderWindow *window, int a, int b)
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
