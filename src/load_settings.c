#include <JustForRevenge.h>

static IS_OK	define_text_intoRect(t_game *game, sfText **text, char *str, int a, int b)
{
	*text = sfText_create();

	sfText_setCharacterSize(*text, 40);
	sfText_setStyle(*text, sfTextBold);
	sfText_setColor(*text, sfWhite);
	sfText_setFont(*text, GRAPHIC.font_text_play);
	sfText_setString(*text, str);
	if (setPositionText(*text, G_WINDOW, a, b))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_all_text(t_game *game)
{
	if (define_text_intoRect(game, &GRAPHIC.settings_sound, "Sound", 400, -390))
		return (BAD);
	if (define_text_intoRect(game, &GRAPHIC.global_settings, "Global Settings", 400, -200))
		return (BAD);
	if (define_text_intoRect(game, &GRAPHIC.settings_resolution, "Resolution", 400, -20))
		return (BAD);
	if (define_text_intoRect(game, &GRAPHIC.settings_fullscreen, "FullScreen", 400, 100))
		return (BAD);
	if (define_text_intoRect(game, &GRAPHIC.settings_fps, "Fps", 400, 200))
		return (BAD);
	if (define_text_intoRect(game, &GRAPHIC.settings_vsync, "vSync", 400, 310))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_settings_bar(t_game *game)
{
	if (applySprite(&GRAPHIC.settings_bar, &GRAPHIC.t_settings_bar, "./res/Settings/settings_bar.png", 500, 112))
		return (BAD);
	if (setPositionSprite(GRAPHIC.settings_bar, G_WINDOW, 100, -390))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_all_settings_bar(t_game *game)
{
	if (define_settings_bar(game))
		return (BAD);
	if (copySprite(GRAPHIC.settings_bar, &GRAPHIC.copy_settings_bar))
		return (BAD);
	if (setPositionSprite(GRAPHIC.settings_bar, G_WINDOW, 100, -200))
		return (BAD);
	if (copySprite(GRAPHIC.settings_bar, &GRAPHIC.copy__settings_bar))
		return (BAD);
	if (setPositionSprite(GRAPHIC.settings_bar, G_WINDOW, 100, -20))
		return (BAD);
	if (copySprite(GRAPHIC.settings_bar, &GRAPHIC.copy___settings_bar))
		return (BAD);
	if (setPositionSprite(GRAPHIC.settings_bar, G_WINDOW, 100, 200))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_checkox_full_screen(t_game *game)
{
	sfIntRect rect = {0, 0, 80, 75};

	if (applySprite(&GRAPHIC.check_box, &GRAPHIC.t_check_box, "./res/Settings/Checkbox_little.png", 80, 150))
		return (BAD);
	sfSprite_setTextureRect(GRAPHIC.check_box, rect);
	if (setPositionSprite(GRAPHIC.check_box, G_WINDOW, -100, 70))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_all_checkbox(t_game *game)
{
	if (define_checkox_full_screen(game))
		return (BAD);
	if (copySprite(GRAPHIC.check_box, &GRAPHIC.copy_check_box))
		return (BAD);
	if (setPositionSprite(GRAPHIC.copy_check_box, G_WINDOW, -100, 300))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_sword_bar(t_game *game)
{
	if (applySprite(&GRAPHIC.sword_bar, &GRAPHIC.t_sword_bar, "./res/Settings/Sword.png", 48, 119))
		return (BAD);
	if (setPositionSprite(GRAPHIC.sword_bar, G_WINDOW, 90, -425))
		return (BAD);
	if (moveSprite(GRAPHIC.sword_bar, SYSTEM.volume * 4.6, 0))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_all_sword_bar(t_game *game)
{
	if (define_sword_bar(game))
		return (BAD);
	if (copySprite(GRAPHIC.sword_bar, &GRAPHIC.copy_sword_bar))
		return (BAD);
	if (setPositionSprite(GRAPHIC.sword_bar, G_WINDOW, 90, -235))
		return (BAD);
	if (copySprite(GRAPHIC.sword_bar, &GRAPHIC.copy__sword_bar))
		return (BAD);
	if (setPositionSprite(GRAPHIC.sword_bar, G_WINDOW, 90, -55))
		return (BAD);
	if (copySprite(GRAPHIC.sword_bar, &GRAPHIC.copy___sword_bar))
		return (BAD);
	if (setPositionSprite(GRAPHIC.sword_bar, G_WINDOW, 90, 165))
		return (BAD);
	return (GOOD);
}

static	IS_OK	load_buttons(t_game *game)
{
	if (applySprite(&GRAPHIC.play_button, &GRAPHIC.t_play_button, "./res/Button/Play2.png", 158, 151))
		return (BAD);
	if (applySprite(&GRAPHIC.settings_button, &GRAPHIC.t_settings_button, "./res/Button/settings.png", 200, 200))
		return (BAD);
	if (setPositionSprite(GRAPHIC.play_button, G_WINDOW, 200, 142))
		return (BAD);
	if (setPositionSprite(GRAPHIC.settings_button, G_WINDOW, 490, 395))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_all_settings_button(t_game *game)
{
	if (copySprite(GRAPHIC.settings_button, &GRAPHIC.copy_settings_button))
		return (BAD);
	if (setPositionSprite(GRAPHIC.copy_settings_button, G_WINDOW, 490, -509))
		return (GOOD);
	if (copySprite(GRAPHIC.settings_button, &GRAPHIC.copy__settings_button))
		return (BAD);
	if (setPositionSprite(GRAPHIC.copy__settings_button, G_WINDOW, -395, -509))
		return (GOOD);
	if (copySprite(GRAPHIC.settings_button, &GRAPHIC.copy___settings_button))
		return (BAD);
	if (setPositionSprite(GRAPHIC.copy___settings_button, G_WINDOW, -395, 395))
		return (GOOD);
	return (GOOD);
}

static IS_OK	define_sound_button(t_game *game)
{
	if (applySprite(&GRAPHIC.settings_sound_no_sound, &GRAPHIC.t_settings_sound_no_sound, "./res/Settings/Sons3.png", 150, 150))
		return (BAD);
	if (setPositionSprite(GRAPHIC.settings_sound_no_sound, G_WINDOW, 347, -440))
		return (BAD);
	if (applySprite(&GRAPHIC.settings_sound_middle, &GRAPHIC.t_settings_sound_middle, "./res/Settings/Sons1.png", 150, 150))
		return (BAD);
	if (setPositionSprite(GRAPHIC.settings_sound_middle, G_WINDOW, 350, -440))
		return (BAD);
	if (applySprite(&GRAPHIC.settings_sound_max, &GRAPHIC.t_settings_sound_max, "./res/Settings/Sons2.png", 150, 150))
		return (BAD);
	if (setPositionSprite(GRAPHIC.settings_sound_max, G_WINDOW, 345, -440))
		return (BAD);
	return (GOOD);
}

static IS_OK	define_settings_page(sfRenderWindow *window, sfRectangleShape **rectangle, sfTexture **texture)
{
	sfVector2u numbers = sfRenderWindow_getSize(window);
	sfIntRect rect = {0, 0, numbers.x, numbers.y};
	sfVector2f size = {numbers.x / 2, numbers.y / 1.05};
	sfVector2f move = {numbers.x / 4, 0};
	sfImage *image;
	sfColor color = sfColor_fromRGBA(51, 51, 51, 240);

	image = sfImage_createFromColor(numbers.x / 2, numbers.y / 1.05, color);
	*texture =  sfTexture_createFromImage(image, &rect);
	*rectangle = sfRectangleShape_create();
	sfRectangleShape_setPosition(*rectangle, move);
	sfRectangleShape_setSize(*rectangle, size);
	sfRectangleShape_setTexture(*rectangle, *texture, sfFalse);
	sfRectangleShape_setTextureRect(*rectangle, rect);
//	sfRectangleShape_setFillColor(*rectangle, sfRed);
	sfRectangleShape_setOutlineThickness(*rectangle, 0.8);
	sfRectangleShape_setOutlineColor(*rectangle, sfBlack);
	sfImage_destroy(image);
	if (!*texture || !*rectangle)
		return (BAD);
	return (GOOD);
}

IS_OK			load_settings_page(t_game *game)
{
	if (define_settings_page(G_WINDOW, &GRAPHIC.rectangle, &GRAPHIC.t_settings))
		return (BAD);
	if (define_all_text(game))
		return (BAD);
	if (define_all_settings_bar(game))
		return (BAD);
	if (define_all_checkbox(game))
		return (BAD);
	if (define_all_sword_bar(game))
		return (BAD);
	if (load_buttons(game))
		return (BAD);
	if (define_all_settings_button(game))
		return (BAD);
	if (define_sound_button(game))
		return (BAD);
	return (GOOD);
}
