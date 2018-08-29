#include <JustForRevenge.h>

static void		clear_window(t_game *game)
{
	if (G_WINDOW) {
		sfRenderWindow_close(G_WINDOW);
		sfRenderWindow_destroy(G_WINDOW);
	}
}

static void		clear_system(t_game *game)
{
	if (SYSTEM.clock_animate)
		sfClock_destroy(SYSTEM.clock_animate);
	if (SYSTEM.clock_sword)
		sfClock_destroy(SYSTEM.clock_sword);
}

static void		clear_audio(t_game *game)
{
	if (AUDIO.music_scene_one) {
		sfMusic_stop(AUDIO.music_scene_one);
		sfMusic_destroy(AUDIO.music_scene_one);
	}
}

static void		clear_graphic_scene_one(t_game *game)
{
	if (GRAPHIC.t_background)
		sfTexture_destroy((*game).Graphic.t_background);
	if (GRAPHIC.background)
		sfSprite_destroy((*game).Graphic.background);

	if (GRAPHIC.t_play_button)
		sfTexture_destroy((*game).Graphic.t_play_button);
	if (GRAPHIC.play_button)
		sfSprite_destroy((*game).Graphic.play_button);
	
	if (GRAPHIC.text_play)
		sfText_destroy(GRAPHIC.text_play);
	if (GRAPHIC.font_text_play)
		sfFont_destroy(GRAPHIC.font_text_play);

	if (GRAPHIC.rectangle)
		sfRectangleShape_destroy(GRAPHIC.rectangle);
	if (GRAPHIC.t_settings)
		sfTexture_destroy(GRAPHIC.t_settings);

	if (GRAPHIC.characters)
		sfSprite_destroy(GRAPHIC.characters);
	if (GRAPHIC.t_characters)
		sfTexture_destroy(GRAPHIC.t_characters);

	if (GRAPHIC.settings_button)
		sfSprite_destroy(GRAPHIC.settings_button);
	if (GRAPHIC.t_settings_button)
		sfTexture_destroy(GRAPHIC.t_settings_button);
	if (GRAPHIC.settings_text)
		sfText_destroy(GRAPHIC.settings_text);

	if (GRAPHIC.title)
		sfSprite_destroy(GRAPHIC.title);
	if (GRAPHIC.t_title)
		sfTexture_destroy(GRAPHIC.t_title);

	if (GRAPHIC.sword)
		sfSprite_destroy(GRAPHIC.sword);
	if (GRAPHIC.t_sword)
		sfTexture_destroy(GRAPHIC.t_sword);
}


IS_OK			clean_ressource_and_close(t_game *game, IS_OK nb)
{
	clear_window(game);
	clear_system(game);
	clear_audio(game);
	clear_graphic_scene_one(game);
	if (game)
		free(game);
	return (nb);
}
