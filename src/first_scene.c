#include <JustForRevenge.h>

IS_OK			define_wallpaper(sfSprite  **wallpaper, sfTexture **t_wallpaper)
{
	const sfIntRect rect = {0, 0, 1980, 1080};

	*wallpaper = sfSprite_create();
	*t_wallpaper = sfTexture_createFromFile("./res/Wallpaper/Wallpaper.jpg", (&rect));
	sfSprite_setTexture(*wallpaper, *t_wallpaper, sfFalse);
	if (!*wallpaper)
		return (BAD);
	return (GOOD);
}
