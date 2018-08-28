#include <JustForRevenge.h>

static IS_OK	animate_character_right(sfSprite *sprite, sfClock *clock, int *save)
{
	sfIntRect rect = {0, *save, 318, 670};

	if (sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.5)
	{
		*save += 745;
		if (*save > 2100)
			*save = 0;
		rect.top = *save;
		sfSprite_setTextureRect(sprite, rect);
		sfClock_restart(clock);
	}
	return (GOOD);
}

IS_OK		move_characters(t_game *game, int choice)
{
	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.characters, NULL);

	switch (choice) {
	case Right:
		animate_character_right(GRAPHIC.characters, SYSTEM.clock_animate, &SYSTEM.save);
		break;
	case RightMove:
		break;
	case Left:
		break;
	case LeftMove:
		break;
	}
	return (GOOD);
}
