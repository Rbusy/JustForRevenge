#include <JustForRevenge.h>

IS_OK	do_event_scene_one(t_game *game)
{
	if ((sfKeyboard_isKeyPressed(sfKeyRight) || sfKeyboard_isKeyPressed(sfKeyLeft)) && WINDOW.open_settings != 1)
	{
		WINDOW.play_or_settings += 1;
		if (WINDOW.play_or_settings == 2)
			WINDOW.play_or_settings = 0;
	}
	if (WINDOW.play_or_settings == 1 && sfKeyboard_isKeyPressed(sfKeyReturn))
	{
		WINDOW.open_settings += 1;
		if (WINDOW.open_settings == 2)
			WINDOW.open_settings = 0;
		sfSleep(SYSTEM.pause);
	}
	if (WINDOW.open_settings == 1 && WINDOW.setting_choice == 0 && sfKeyboard_isKeyPressed(sfKeyLeft))
		if (SYSTEM.volume > 0)
		{
			SYSTEM.volume--;
			moveSprite(GRAPHIC.copy_sword_bar, -4.6, 0);
		}
	if (WINDOW.open_settings == 1 && WINDOW.setting_choice == 0 && sfKeyboard_isKeyPressed(sfKeyRight))
		if (SYSTEM.volume < 100)
		{
			SYSTEM.volume++;
			moveSprite(GRAPHIC.copy_sword_bar, 4.6, 0);
		}
	return (GOOD);
}
