#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimentional array
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **saa;
	int i, s;

	if (width <= 0 || height <= 0)
		return (NULL);

	saa = malloc(sizeof(int *) * height);

	if (saa == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		saa[i] = malloc(sizeof(int) * width);

		if (saa[i] == NULL)
		{
			for (; i >= 0; i--)
				free(saa[i]);

			free(saa);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (s = 0; s < width; s++)
			saa[i][s] = 0;
	}

	return (saa);
}
