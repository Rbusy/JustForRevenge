#include <JustForRevenge.h>

static IS_OK	load_music(t_game *game)
{
	if (applyMusic(&AUDIO.music_scene_one, "./res/Musique/musique1.ogg"))
		return (BAD);
	sfMusic_play(AUDIO.music_scene_one);
	sfMusic_setVolume(AUDIO.music_scene_one, SYSTEM.volume);
	return (GOOD);
}

static IS_OK	load_background(t_game *game)
{
	if (applySprite(&GRAPHIC.background, &GRAPHIC.t_background, "./res/Wallpaper/Wallpaper2.jpg", 1980, 1080))
		return (BAD);
	return (GOOD);
}

static IS_OK	load_text(t_game *game)
{
	GRAPHIC.text_play = sfText_create();

	sfText_setCharacterSize(GRAPHIC.text_play, 100);
	sfText_setStyle(GRAPHIC.text_play, sfTextItalic);
	sfText_setColor(GRAPHIC.text_play, sfWhite);
	GRAPHIC.font_text_play = sfFont_createFromFile("./res/Typo/Prout.ttf");
	sfText_setFont(GRAPHIC.text_play, GRAPHIC.font_text_play);
	if (setPositionText(GRAPHIC.text_play, G_WINDOW, 150, 100))
		return (BAD);
	return (GOOD);
}

static IS_OK	load_title(t_game *game)
{
	if (applySprite(&GRAPHIC.title, &GRAPHIC.t_title, "./res/Typo/Title.png", 1531, 352))
		return (BAD);
	if (setPositionSprite(GRAPHIC.title, G_WINDOW, 760, -350))
		return (BAD);
	return (GOOD);
}

static IS_OK	load_sword(t_game *game)
{
	sfIntRect rect = {0, 0, 500, 108};

	if (applySprite(&GRAPHIC.sword, &GRAPHIC.t_sword, "./res/Sword3.png", 500, 317))
		return (BAD);
	if (setPositionSprite(GRAPHIC.sword, G_WINDOW, 268, 117))
		return (BAD);
	sfSprite_setTextureRect(GRAPHIC.sword, rect);
	SYSTEM.clock_sword = sfClock_create();
	if (!SYSTEM.clock_sword)
		return (BAD);
	return (GOOD);
}

IS_OK			load_res_scene_one(t_game *game)
{
	if (load_music(game) || load_background(game) || load_text(game) || load_title(game) || load_sword(game))
		return (BAD);
	return (GOOD);
}
