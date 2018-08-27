#include <JustForRevenge.h>

IS_OK				clean_ressource_and_close(t_game *game)
{
	sfRenderWindow_close(G_WINDOW);
	sfTexture_destroy((*game).Graphic.t_background);
	sfSprite_destroy((*game).Graphic.background);
	sfTexture_destroy((*game).Graphic.t_play_button);
	sfSprite_destroy((*game).Graphic.play_button);
	sfRenderWindow_destroy(G_WINDOW);
	sfMusic_stop(AUDIO.music_scene_one);
	sfMusic_destroy(AUDIO.music_scene_one);
	free(game);
	return (GOOD);
}
