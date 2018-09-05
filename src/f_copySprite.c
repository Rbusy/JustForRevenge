#include <JustForRevenge.h>

IS_OK	copySprite(sfSprite *src, sfSprite **dest)
{
	*dest = sfSprite_copy(src);
	if (!*dest)
		return (BAD);
	return (GOOD);
}
