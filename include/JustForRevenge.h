#ifndef JUSTFORREVENGE_H
# define JUSTFORREVENGE_H

# include		<SFML/Window.h>
# include		<SFML/Graphics.h>
# include		<stdlib.h>

# define		BAD						42
# define		GOOD					0
# define		ERROR					84

# define		IS_OK					int

# define		WINDOW					(*game).Window.window
# define		EVENT					(*game).Window.event

typedef struct		Window
{
	sfRenderWindow	*window;
	sfEvent			event;

}					t_window;

typedef struct		Graphic
{
	sfSprite		*wallpaper;
	sfTexture		*t_wallpaper;

}					t_graphic;

typedef struct		Audio
{

}					t_audio;

typedef struct		GLOBAL_GAME
{
	t_window		Window;
	t_graphic		Graphic;

}					t_game;

#endif
