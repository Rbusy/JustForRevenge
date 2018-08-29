#include <JustForRevenge.h>

IS_OK	window_display_and_clear(sfRenderWindow *window)
{
	sfRenderWindow_display(window);
	sfRenderWindow_clear(window, sfBlack);
	return (GOOD);
}
