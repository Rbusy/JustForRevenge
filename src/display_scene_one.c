#include <JustForRevenge.h>

IS_OK			display_scene_one(t_game *game)
{
	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.background, NULL);
	sfRenderWindow_drawRectangleShape(G_WINDOW, GRAPHIC.rectangle, NULL);
	sfRenderWindow_drawSprite(G_WINDOW, GRAPHIC.play_button, NULL);
	return (GOOD);
}
