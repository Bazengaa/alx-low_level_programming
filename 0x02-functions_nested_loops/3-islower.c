#include "main.h"

/**
* _islower - Entry point
*
* this program checks if a character is lowercase
*
**/
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else

		return(0);

}
