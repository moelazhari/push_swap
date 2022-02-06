#include "push_swap.h"

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

int	ci_find_min(int *tab, int top)
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
	tab[min] = tab[find_max(tab, top)];
	return (min);
}
	
void	convert_index(stack *s)
{
	int	*tmp;
	int min;
	int	i;

	i = 0;
	tmp = malloc(sizeof(int) * (s->top + 1));
	while (i <= s->top)
	{
		tmp[i] = s->tab[i];
		i++;
	}
	i = 0;
	while (i < s->top)
	{
		min = ci_find_min(tmp, s->top);
		s->tab[min] = i;
		i++;
	}
	s->tab[find_max(s->tab, s->top)] = i;
	free(tmp);
}
