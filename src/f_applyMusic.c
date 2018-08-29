#include <JustForRevenge.h>

IS_OK	applyMusic(sfMusic **music, char *str)
{
	*music = sfMusic_createFromFile(str);
	if (!*music)
		return (BAD);
	sfMusic_play(*music);
	return (GOOD);
}
