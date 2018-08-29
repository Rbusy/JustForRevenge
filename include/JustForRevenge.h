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
# define		SYSTEM					(*game).System

typedef enum
{
	Right           =   0,
	RightMove       =   1,
	Left            =   2,
	LeftMove        =   3

}					MoveCharacters;

typedef enum
{
	SceneOne        =   1,
	SceneTwo        =   2,
	SceneThree      =   3,
	SceneFor        =   4

}					SceneChoice;


///////////////////////////////////////////////////////
/*                                                   */
/*                  Window                           */
/*                                                   */
///////////////////////////////////////////////////////


typedef struct		Window
{
	sfRenderWindow	*window;
	sfEvent			event;
	int				scene;
	int				play_or_settings;
	int				open_settings;

}					t_window;

///////////////////////////////////////////////////////
/*                                                   */
/*                  System                           */
/*                                                   */
///////////////////////////////////////////////////////

typedef struct		System
{
	sfClock			*clock_animate;
	sfClock			*clock_sword;
	int				save;
	int				save_clock_sword;
	int				movement_choice;
	sfTime			pause;

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

	sfText			*text_play;
	sfFont			*font_text_play;

	sfRectangleShape*rectangle;
	sfTexture		*t_settings;

	sfSprite		*characters;
	sfTexture		*t_characters;

	sfSprite		*settings_button;
	sfTexture		*t_settings_button;
	sfText			*settings_text;

	sfSprite		*title;
	sfTexture		*t_title;

	sfSprite		*sword;
	sfTexture		*t_sword;

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

///////////////////////////////////////////////////////
/*                                                   */
/*                  Function                         */
/*                                                   */
///////////////////////////////////////////////////////

IS_OK				applySprite(sfSprite**, sfTexture**, char *, int, int b);
IS_OK				applyMusic(sfMusic **, char*);
IS_OK				initialize_game_struct(t_game **game);
IS_OK				create_window(sfRenderWindow**);
IS_OK				clean_ressource_and_close(t_game *, IS_OK);
IS_OK				load_res_scene_one(t_game*);
IS_OK				display_scene_one(t_game*);
IS_OK				load_settings_page(t_game*);
IS_OK				load_characters(t_game*);
IS_OK				display_scene(t_game*);
IS_OK				move_characters(t_game*, int);
IS_OK				move_text(sfText*, sfRenderWindow*, int, int);
IS_OK				move_sprite(sfSprite *, sfRenderWindow *, int, int);
IS_OK				display_settings(t_game*);
IS_OK				animate_scene_one(t_game *game);
IS_OK				window_display_and_clear(sfRenderWindow*);
IS_OK				do_event(t_game *game);
IS_OK				do_event_scene_one(t_game *game);

#endif
