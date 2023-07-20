#include "main.h"
/**
*  _isupper - checks if a container is upper
*
* @x: THe number to be checked
* Return: if upper return 1 else return 0
*/

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
		return (0);
}
