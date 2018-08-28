#include <JustForRevenge.h>

IS_OK			display_scene_one(t_game *game)
{
	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.background, NULL);
//	sfRenderWindow_drawRectangleShape(G_WINDOW, GRAPHIC.rectangle, NULL);
	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.play_button, NULL);
	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.settings_button, NULL);
	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.title, NULL);

	if (WINDOW.play_or_settings == 0)
		sfText_setString(GRAPHIC.text_play, " Play");
	else
		sfText_setString(GRAPHIC.text_play, "Option");
	sfRenderWindow_drawText(G_WINDOW, GRAPHIC.text_play, NULL);
	return (GOOD);
}
