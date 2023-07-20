#include "main.h"
/**
* _isdigit - function that checks from 0 - 9
*
* @c: parameter to be checked
*
* Return: 1 on success 0 on failure
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
