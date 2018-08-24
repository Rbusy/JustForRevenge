#include <JustForRevenge.h>



sfRenderWindow	*create_game(void)
{
	sfVideoMode video = {1980, 1080, 32};


	sfRenderWindow_create(video, "JustForRevenge", sfDefaultStyle, NULL);
}


int		main(int argc, char **argv, char **env)
{
	sfRenderWindow *window = create_game();


	while (sfRenderWindow_isOpen(window))
	{
		sfRenderWindow_display(window);
		sfRenderWindow_clear(window, sfBlue);

	}


}
