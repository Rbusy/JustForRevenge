#include <JustForRevenge.h>

IS_OK		do_event(t_game *game)
{
	if (G_EVENT.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
		return (BAD);
	switch (WINDOW.scene)
	{
	case SceneOne:
		do_event_scene_one(game);
		break;
	case SceneTwo:
		break;
	case SceneThree:
		break;
	case SceneFor:
		break;
	default:
		break;
	}
	return (GOOD);
}
