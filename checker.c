#include "push_swap.h"

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
        //git_instructions();
        if (check_is_sort(&data))
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