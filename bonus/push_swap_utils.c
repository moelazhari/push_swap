#include "checker.h"

int	check_is_sort(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->lena - 1)
	{
		if (data->stacka[i] > data->stacka[i + 1])
			return (0);
	}
	return (1);
}

void	check_digit(int ac, char **str, t_data *data)
{
	int	i;
	int j;

	i = 0;
	while (++i < ac)
	{
		if (str[i][0] == '\0')
			exit_error(data);
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '-')
				j++;
			if (!ft_isdigit(str[i][j]))
				exit_error(data);
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
