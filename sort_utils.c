#include "push_swap.h"

int	get_big(int *arr, int len)
{
	int	i;
	int	max;

	i = 0;
	max = arr[0];
	while (i < len)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	return (max);
}

int	get_small(int *arr,int len, int *index)
{
	int i;
	int	small;

	i = 0;
	*index = 0;
	small = arr[0];
	while (++i < len - 1)
	{
		if (arr[i] < small)
			small = arr[i];
		(*index)++;
	}
	return (small);
}
