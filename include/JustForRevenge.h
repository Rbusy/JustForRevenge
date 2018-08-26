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

///////////////////////////////////////////////////////
/*                                                   */
/*                  Window                           */
/*                                                   */
///////////////////////////////////////////////////////


typedef struct		Window
{
	sfRenderWindow	*window;
	sfEvent			event;

}					t_window;


///////////////////////////////////////////////////////
/*                                                   */
/*                  Graphic                          */
/*                                                   */
///////////////////////////////////////////////////////


typedef struct		Graphic
{
	sfSprite		*background;
	sfTexture		*t_background;
	sfSprite		*play_button;
	sfTexture		*t_play_button;

}					t_graphic;


///////////////////////////////////////////////////////
/*                                                   */
/*                  Audio                            */
/*                                                   */
///////////////////////////////////////////////////////

typedef struct		Audio
{

}					t_audio;

///////////////////////////////////////////////////////
/*                                                   */
/*                  GLOBAL_GAME                      */
/*                                                   */
///////////////////////////////////////////////////////


typedef struct		GLOBAL_GAME
{
	t_window		Window;
	t_graphic		Graphic;

}					t_game;

t_game				*initialize_game_struct();
IS_OK				initialize_window(sfRenderWindow**);
IS_OK				clean_ressource_and_close(t_game *gameme);
IS_OK				load_sprite_scene_one(t_game*);
void				display_sprite_scene_one(t_game*);

#endif
