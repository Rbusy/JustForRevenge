#include <JustForRevenge.h>

static IS_OK	apply_music(sfMusic **music, char *str)
{
	*music = sfMusic_createFromFile(str);
	if (!*music)
		return (BAD);
	return (GOOD);
}

static IS_OK	define_wallpaper(sfSprite  **wallpaper, sfTexture **t_wallpaper)
{
	if (applySprite(wallpaper, t_wallpaper, "./res/Wallpaper/Wallpaper2.jpg", 1980, 1080))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_play_button(sfSprite **button, sfTexture **t_button)
{
	if (applySprite(button, t_button, "./res/Button/Play2.png", 158, 151))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_settings_button(sfSprite **sprite, sfTexture **texture)
{
	if (applySprite(sprite, texture, "./res/Button/settings.png", 200, 200))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_play_text(sfText **text, sfFont **font)
{
	*text = sfText_create();

	sfText_setString(*text, "Play");
	sfText_setCharacterSize(*text, 100);
	sfText_setStyle(*text, sfTextItalic);
	sfText_setColor(*text, sfWhite);
	*font = sfFont_createFromFile("./res/Typo/Assassin.ttf");
	sfText_setFont(*text, *font);
	return (GOOD);
}

static IS_OK	define_title(sfSprite **sprite, sfTexture **texture)
{
	if (applySprite(sprite, texture, "./res/Typo/typo1.png", 1028, 419))
		return (BAD);
	return (GOOD);
}

IS_OK			load_res_scene_one(t_game *game)
{
	if (define_wallpaper(&GRAPHIC.background, &GRAPHIC.t_background))
		return (BAD);
	if (define_play_button(&GRAPHIC.play_button, &GRAPHIC.t_play_button))
		return (BAD);
	if (define_settings_button(&GRAPHIC.settings_button, &GRAPHIC.t_settings_button))
		return (BAD);
	if (apply_music(&AUDIO.music_scene_one, "./res/Musique/musique1.ogg"))
		return (BAD);
	if (move_sprite(GRAPHIC.play_button, G_WINDOW, 200, 142))
		return (BAD);
	if (move_sprite(GRAPHIC.settings_button, G_WINDOW, -20, 142))
		return (BAD);
	if (define_play_text(&GRAPHIC.text_play, &GRAPHIC.font_text_play))
		return (BAD);
	if (move_text(GRAPHIC.text_play, G_WINDOW, 150, -50))
		return (BAD);

	if (define_title(&GRAPHIC.title, &GRAPHIC.t_title))
		return (BAD);
//	if (move_sprite(GRAPHIC.title, G_WINDOW, 0, 150))
//		return (BAD);
	return (GOOD);
}
