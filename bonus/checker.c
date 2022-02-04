#include "checker.h"

void     check_instructions(char *str, t_data *data)
{
    if (!ft_strncmp("sa\n", str, 3))
		sa(data);
	else if (!ft_strncmp("sb\n", str, 3))
		sb(data);
	else if (!ft_strncmp("ss\n", str, 3))
		ss(data);
	else if (!ft_strncmp("ra\n", str, 3))
		ra(data);
	else if (!ft_strncmp("rb\n", str, 3))
		rb(data);
	else if (!ft_strncmp("rr\n", str, 3))
		rr(data);
	else if (!ft_strncmp("pa\n", str, 3))
		pa(data);
	else if (!ft_strncmp("pb\n", str, 3))
		pb(data);
	else if (!ft_strncmp("rra\n", str, 4))
		rra(data);
	else if (!ft_strncmp("rrb\n", str, 4))
		rrb(data);
	else if (!ft_strncmp("rrr\n", str, 4))
		rrr(data);
	else
		exit_error(data);
}

void get_instructions(t_data *data)
{
    char *instructions;

   	while (1)
    {
        instructions = get_next_line(0);
    	if(!instructions)
            break ;
        check_instructions(instructions, data);
        free(instructions);
   }
}

int main(int ac, char *av[])
{
    t_data data;

    if (ac > 2)
	{
        check_digit(ac, av, &data);
        get_stack(ac, av, &data);
        if (check_is_sort(&data) || data.lena == 1)
	    {
            write (1, "OK\n", 3);
		    free(data.stacka);
		    exit(0);
	    }
        get_instructions(&data);
        if (check_is_sort(&data) && !data.lenb)
            write (1, "OK\n", 3);
        else
            write (1, "KO\n", 3);
        if (data.stacka)
		free(data.stacka);
	    if (data.stackb)
		free(data.stackb);
    }
    return 0;
}