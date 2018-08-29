#include <JustForRevenge.h>

static void		initialize_window(t_game *game)
{
	WINDOW.window = NULL;
	WINDOW.scene = 1;
	WINDOW.play_or_settings = 0;
	WINDOW.open_settings = 0;
}

static void		initialize_system(t_game *game)
{
	SYSTEM.clock_animate = NULL;
	SYSTEM.clock_sword = NULL;
	SYSTEM.save = 0;
	SYSTEM.save_clock_sword = 0;
	SYSTEM.movement_choice = 0;
	SYSTEM.pause = sfSeconds(0.20);
}

static void		initialize_audio(t_game *game)
{
	AUDIO.music_scene_one = NULL;
}

static void		initialize_graphic(t_game *game)
{
	GRAPHIC.background = NULL;
	GRAPHIC.t_background = NULL;

	GRAPHIC.play_button = NULL;
	GRAPHIC.t_play_button = NULL;

	GRAPHIC.text_play = NULL;
	GRAPHIC.font_text_play = NULL;

	GRAPHIC.rectangle = NULL;
	GRAPHIC.t_settings = NULL;

	GRAPHIC.characters = NULL;
	GRAPHIC.t_characters = NULL;

	GRAPHIC.settings_button = NULL;
	GRAPHIC.t_settings_button = NULL;
	GRAPHIC.settings_text = NULL;

	GRAPHIC.title = NULL;
	GRAPHIC.t_title = NULL;

	GRAPHIC.sword = NULL;
	GRAPHIC.t_sword = NULL;
}

IS_OK		initialize_game_struct(t_game **game)
{
	*game = malloc(sizeof(**game));

	initialize_window(*game);
	initialize_system(*game);
	initialize_audio(*game);
	initialize_graphic(*game);
	if (!*game)
		return (BAD);
	return (GOOD);
}

IS_OK			create_window(sfRenderWindow **window)
{
	sfVideoMode video = {1980, 1080, 32};

	*window = sfRenderWindow_create(video, "JustForRevenge", sfFullscreen, NULL);
	if (!*window)
		return (BAD);
	sfRenderWindow_setFramerateLimit(*window, 60);
	sfRenderWindow_setMouseCursorVisible(*window, sfFalse);
	return (GOOD);
}
