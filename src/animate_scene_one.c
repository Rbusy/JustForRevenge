#include <JustForRevenge.h>

static IS_OK	animate_sword(t_game *game)
{
	sfIntRect rect = {0, SYSTEM.save_clock_sword, 500, 110};

	if (sfTime_asSeconds(sfClock_getElapsedTime(SYSTEM.clock_sword)) > 0.15)
	{
		SYSTEM.save_clock_sword += 110;
		if (SYSTEM.save_clock_sword >= 330)
			SYSTEM.save_clock_sword = 0;
		sfClock_restart(SYSTEM.clock_sword);
		sfSprite_setTextureRect(GRAPHIC.sword, rect);
	}
	return (GOOD);
}

IS_OK			animate_scene_one(t_game *game)
{
	animate_sword(game);
	return (GOOD);
}
