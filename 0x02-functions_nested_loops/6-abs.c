#include "main.h"
/**
* _abs - Computes the absolute value of an integer*
* @i: The int to check
* Return: The absolute value of ineger
*/

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else if (i >= 0)
	{
		return (i);
	}
	return (0);
}
