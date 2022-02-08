#include "checker.h"

void check_digit(int ac, char **str, stack *a, stack *b)
{
	int	i;
	int j;

	i = 0;
	while (++i < ac)
	{
		if (str[i][0] == '\0')
			exit_error(a, b);
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '-')
				j++;
			if (!ft_isdigit(str[i][j]))
				exit_error(a, b);
			j++;	
		}
	}
}

int	check_is_sort(stack a)
{
	int	i;

	i = -1;
	while (++i < a.top)
	{
		if (a.tab[i] < a.tab[i + 1])
			return (0);
	}
	return (1);
}
