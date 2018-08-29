#include <JustForRevenge.h>

IS_OK			display_scene_one(t_game *game)
{
	sfVector2u numbers = sfRenderWindow_getSize(G_WINDOW);
	sfVector2f vect = {numbers.x / 2 - 150, numbers.y / 2 + 90};

	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.background, NULL);
//	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.play_button, NULL);
//	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.settings_button, NULL);
	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.title, NULL);

	if (WINDOW.play_or_settings == 0) {
		sfText_setString(GRAPHIC.text_play, "  Play");
		vect.x -= 10;
		sfText_setPosition(GRAPHIC.text_play, vect);
	}
	else {
		sfText_setPosition(GRAPHIC.text_play, vect);
		sfText_setString(GRAPHIC.text_play, "Option");
	}
	sfRenderWindow_drawText(G_WINDOW, GRAPHIC.text_play, NULL);
	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.sword, NULL);
	if (WINDOW.open_settings)
		sfRenderWindow_drawRectangleShape(G_WINDOW, GRAPHIC.rectangle, NULL);
	return (GOOD);
}
