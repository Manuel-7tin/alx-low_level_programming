#include "main.h"

/**
 * islower - Entry point
 *
 * Description: Decides if a letter is lower or upper case
 *
 * Returns: 1 (success) 0 
 */

int _islower(int c)
{
	if (c < 91)
	return (0);
	else
	return (1);
}
