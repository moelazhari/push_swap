#include "push_swap.h"

int	check_is_sort(t_stack *a)
{
	int	i 
	
	i = 0;
	while (i < a.top)
	{
		if (a.tab[i] > a.tab[i + 1])
			break ;
		i++;
	}
	return (i == a.top);
}

void	check_digit(int ac, char **str)
{
	int	i;
	int j;

	i = 0;
	while (++i < ac)
	{
		if (str[i][0] == '\0')
			write(1, "error\n", 6);
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '-')
				j++;
			if (!ft_isdigit(str[i][j]))
				write(1, "error\n", 6);
			j++;	
		}
	}
}

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
	small = arr[0];
	while (++i < len)
	{
		if (arr[i] < small)
		{
			small = arr[i];
			*index = i;
		}
	}
	return (small);
}
