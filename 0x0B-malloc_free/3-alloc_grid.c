#include "main.h"


/**
 * alloc_grid - nested loop to make grid 
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **iarray;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int) * height);
	if (iarray == NULL)
	{
		free(; i < height; i++);
		{
			array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] != NULL)
		{
			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
		ellse
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			free(arrat);
			return (NULL);
		}
	}
	return(array);
}
else
{
	return (NULL);
}
}







		for (n = 0; n < width; n++)
		{
			iarray[i][n] = 0;
		}
	}
	return (iarray);
}
