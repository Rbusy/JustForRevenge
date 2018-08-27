#ifndef JUSTFORREVENGE_H
# define JUSTFORREVENGE_H

# include		<SFML/Window.h>
# include		<SFML/Graphics.h>
# include		<SFML/Audio.h>
# include		<stdlib.h>

# define		BAD						42
# define		GOOD					0
# define		ERROR					84

# define		IS_OK					int

# define		G_WINDOW				(*game).Window.window
# define		G_EVENT					(*game).Window.event

# define		WINDOW					(*game).Window
# define		AUDIO					(*game).Audio
# define		GRAPHIC					(*game).Graphic

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
/*                  System                           */
/*                                                   */
///////////////////////////////////////////////////////

typedef struct		System
{

}					t_system;

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
	sfRectangleShape*rectangle;

}					t_graphic;


///////////////////////////////////////////////////////
/*                                                   */
/*                  Audio                            */
/*                                                   */
///////////////////////////////////////////////////////

typedef struct		Audio
{
	sfMusic			*music_scene_one;

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
	t_audio			Audio;
	t_system		System;

}					t_game;

t_game				*initialize_game_struct();
IS_OK				initialize_window(sfRenderWindow**);
IS_OK				clean_ressource_and_close(t_game *gameme);
IS_OK				load_res_scene_one(t_game*);
void				display_sprite_scene_one(t_game*);

#endif
