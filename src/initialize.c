#include <JustForRevenge.h>

t_game				*initialize_game_struct(void)
{
	t_game *game = malloc(sizeof(*game));

	if (!game)
		return (NULL);

	GRAPHIC.background = NULL;
	GRAPHIC.t_background = NULL;
	GRAPHIC.play_button = NULL;
	GRAPHIC.t_play_button = NULL;
	GRAPHIC.rectangle = NULL;
	GRAPHIC.t_settings = NULL;
	GRAPHIC.characters = NULL;
	GRAPHIC.t_characters = NULL;

	AUDIO.music_scene_one = NULL;

	SYSTEM.clock_animate = NULL;
	SYSTEM.save = 0;
	SYSTEM.movement_choice = 0;

	WINDOW.window = NULL;
	WINDOW.scene = 1;

	return (game);
}

IS_OK			initialize_window(sfRenderWindow **window)
{
	sfVideoMode video = {1980, 1080, 32};

	*window = sfRenderWindow_create(video, "JustForRevenge", sfFullscreen, NULL);
	if (!*window)
		return (BAD);
	return (GOOD);
}
