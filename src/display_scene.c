#include <JustForRevenge.h>

IS_OK		display_scene(t_game *game)
{
	switch (WINDOW.scene)
	{
	case SceneOne:
		display_scene_one(game);
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
