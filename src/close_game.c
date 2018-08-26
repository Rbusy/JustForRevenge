#include <JustForRevenge.h>

IS_OK				clean_ressource_and_close(t_game *game)
{
	sfRenderWindow_close(WINDOW);
	sfTexture_destroy((*game).Graphic.t_background);
	sfSprite_destroy((*game).Graphic.background);
	sfTexture_destroy((*game).Graphic.t_play_button);
	sfSprite_destroy((*game).Graphic.play_button);
	sfRenderWindow_destroy(WINDOW);
	free(game);
	return (GOOD);
}
