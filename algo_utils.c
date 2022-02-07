#include "push_swap.h"

int	check_is_sort(stack a)
{
	int	i;

	i = -1;
	while (++i <= a.top)
	{
		if (a.tab[i] < a.tab[i + 1])
			return (0);
	}
	return (1);
}

int	find_max(int *tab, int top)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i <= top)
	{
		if (tab[i] > tab[max])
			max = i;
		i++;
	}
	return (max);
}

int	find_min(int *tab, int top)
{
	int	min;
	int	i;

	min = 0;
	i = 0;
	while (i <= top)
	{
		if (tab[i] <= tab[min])
			min = i;
		i++;
	}
	return (min);
}
