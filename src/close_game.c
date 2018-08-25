#include <JustForRevenge.h>

IS_OK				clean_ressource_and_close(t_game *game)
{
	sfRenderWindow_close(WINDOW);
	sfTexture_destroy((*game).Graphic.t_wallpaper);
	sfSprite_destroy((*game).Graphic.wallpaper);
	sfRenderWindow_destroy(WINDOW);
	free(game);
	return (GOOD);
}
