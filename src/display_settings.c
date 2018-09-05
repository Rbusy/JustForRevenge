#include <JustForRevenge.h>

IS_OK	display_settings(t_game *game)
{
	if (WINDOW.open_settings) {
		sfRenderWindow_drawRectangleShape(G_WINDOW, GRAPHIC.rectangle, NULL);

		sfRenderWindow_drawText(G_WINDOW, GRAPHIC.settings_sound, NULL);
		sfRenderWindow_drawText(G_WINDOW, GRAPHIC.global_settings, NULL);
		sfRenderWindow_drawText(G_WINDOW, GRAPHIC.settings_resolution, NULL);
		sfRenderWindow_drawText(G_WINDOW, GRAPHIC.settings_fullscreen, NULL);
		sfRenderWindow_drawText(G_WINDOW, GRAPHIC.settings_fps, NULL);
		sfRenderWindow_drawText(G_WINDOW, GRAPHIC.settings_vsync, NULL);

		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.settings_bar, NULL);
		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.copy_settings_bar, NULL);
		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.copy__settings_bar, NULL);
		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.copy___settings_bar, NULL);

		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.check_box, NULL);
		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.copy_check_box, NULL);

		if (GRAPHIC.sword_bar)
			sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.sword_bar, NULL);
		if (GRAPHIC.copy_sword_bar)
		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.copy_sword_bar, NULL);
		if (GRAPHIC.copy__sword_bar)
		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.copy__sword_bar, NULL);
		if (GRAPHIC.copy___sword_bar)
		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.copy___sword_bar, NULL);

		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.settings_button, NULL);
		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.copy_settings_button, NULL);
		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.copy__settings_button, NULL);
		sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.copy___settings_button, NULL);

		if (SYSTEM.volume == 0)
			sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.settings_sound_no_sound, NULL);
		else if (SYSTEM.volume == 100)
			sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.settings_sound_max, NULL);
		else
			sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.settings_sound_middle, NULL);
	}
	return (GOOD);
}
