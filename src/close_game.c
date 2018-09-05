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

	if (GRAPHIC.characters)
		sfSprite_destroy(GRAPHIC.characters);
	if (GRAPHIC.t_characters)
		sfTexture_destroy(GRAPHIC.t_characters);

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

static void		clear_settings(t_game *game)
{
	if (GRAPHIC.rectangle)
		sfRectangleShape_destroy(GRAPHIC.rectangle);
	if (GRAPHIC.t_settings)
		sfTexture_destroy(GRAPHIC.t_settings);
	if (GRAPHIC.settings_sound)
		sfText_destroy(GRAPHIC.settings_sound);
	if (GRAPHIC.global_settings)
		sfText_destroy(GRAPHIC.global_settings);
	if (GRAPHIC.settings_resolution)
		sfText_destroy(GRAPHIC.settings_resolution);
	if (GRAPHIC.settings_fullscreen)
		sfText_destroy(GRAPHIC.settings_fullscreen);
	if (GRAPHIC.settings_fps)
		sfText_destroy(GRAPHIC.settings_fps);
	if (GRAPHIC.settings_vsync)
		sfText_destroy(GRAPHIC.settings_vsync);
	if (GRAPHIC.settings_bar)
		sfSprite_destroy(GRAPHIC.settings_bar);
	if (GRAPHIC.copy_settings_bar)
		sfSprite_destroy(GRAPHIC.copy_settings_bar);
	if (GRAPHIC.copy__settings_bar)
		sfSprite_destroy(GRAPHIC.copy__settings_bar);
	if (GRAPHIC.copy___settings_bar)
		sfSprite_destroy(GRAPHIC.copy___settings_bar);
	if (GRAPHIC.t_settings_bar)
		sfTexture_destroy(GRAPHIC.t_settings_bar);
	if (GRAPHIC.copy_sword_bar)
		sfSprite_destroy(GRAPHIC.copy_sword_bar);
	if (GRAPHIC.copy__sword_bar)
		sfSprite_destroy(GRAPHIC.copy__sword_bar);
	if (GRAPHIC.copy___sword_bar)
		sfSprite_destroy(GRAPHIC.copy___sword_bar);
	if (GRAPHIC.sword_bar)
		sfSprite_destroy(GRAPHIC.sword_bar);
	if (GRAPHIC.t_sword_bar)
		sfTexture_destroy(GRAPHIC.t_sword_bar);
	if (GRAPHIC.check_box)
		sfSprite_destroy(GRAPHIC.check_box);
	if (GRAPHIC.t_check_box)
		sfTexture_destroy(GRAPHIC.t_check_box);
	if (GRAPHIC.copy_check_box)
		sfSprite_destroy(GRAPHIC.copy_check_box);
	if (GRAPHIC.settings_button)
		sfSprite_destroy(GRAPHIC.settings_button);
	if (GRAPHIC.t_settings_button)
		sfTexture_destroy(GRAPHIC.t_settings_button);
	if (GRAPHIC.copy_settings_button)
		sfSprite_destroy(GRAPHIC.copy_settings_button);
	if (GRAPHIC.copy__settings_button)
		sfSprite_destroy(GRAPHIC.copy__settings_button);
	if (GRAPHIC.copy___settings_button)
		sfSprite_destroy(GRAPHIC.copy___settings_button);
	if (GRAPHIC.settings_sound_no_sound)
		sfSprite_destroy(GRAPHIC.settings_sound_no_sound);
	if (GRAPHIC.t_settings_sound_no_sound)
		sfTexture_destroy(GRAPHIC.t_settings_sound_no_sound);
	if (GRAPHIC.settings_sound_middle)
		sfSprite_destroy(GRAPHIC.settings_sound_middle);
	if (GRAPHIC.t_settings_sound_middle)
		sfTexture_destroy(GRAPHIC.t_settings_sound_middle);
	if (GRAPHIC.settings_sound_max)
		sfSprite_destroy(GRAPHIC.settings_sound_max);
	if (GRAPHIC.t_settings_sound_max)
		sfTexture_destroy(GRAPHIC.t_settings_sound_max);
}


IS_OK			clean_ressource_and_close(t_game *game, IS_OK nb)
{
	clear_window(game);
	clear_system(game);
	clear_audio(game);
	clear_graphic_scene_one(game);
	clear_settings(game);
	if (game)
		free(game);
	return (nb);
}
