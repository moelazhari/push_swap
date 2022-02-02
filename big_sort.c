
#include "push_swap.h"
/*typedef struct 
{
	int	tab[20];
	int	top;
} stack;

stack	stack_creator(void)
{
	stack	s;

	s.top = -1;
	return (s);
}

void	sw(stack *s)
{
	int	tmp;

	tmp = s->tab[s->top];
	s->tab[s->top] = s->tab[(s->top) - 1];
	s->tab[(s->top) - 1] = tmp;
}

void	ss(stack *a, stack *b)
{
	sw(a);
	sw(b);
}

void	pu(stack *a, stack *b)
{
	b->tab[(b->top) + 1] = a->tab[a->top];
	a->top -= 1;
	b->top += 1;
}

void	ro(stack *s)
{
	int	tmp;
	int	i;

	tmp = s->tab[s->top];
	i = s->top;
	while (i--)
		s->tab[i + 1] = s->tab[i];
	s->tab[0] = tmp;
}

void	rr(stack *a, stack *b)
{
	ro(a);
	ro(b);
}

void	rro(stack *s)
{
	int	tmp;
	int	i;

	tmp = s->tab[0];
	i = 0;
	while (i++ < s->top)
		s->tab[i - 1] = s->tab[i];
	s->tab[s->top] = tmp;
}

void	rrr(stack *a, stack *b)
{
	rro(a);
	rro(b);
}
*/

void	big_sort(t_data *data)
{
	while (1)
	{
		while (data->stacka[0] > data->stacka[data->lena - 1])
		{
		    if (data->stacka[data->lena - 1] > data->stacka[data->lena - 2])
				ra(data);
			else
				rra(data);
		}
		if (data->stacka[0] > data->stacka[1])
			sa(data);
		if (check_is_sort(data))
			break ;
		pb(data);
        if (data->stackb[0] < data->stackb[1])
            sb(data);
	}
	while (data->lenb > 0)
	{
		if (data->stackb[0] < data->stackb[data->lenb - 1])
			rrb(data);
        pa(data);
		if (data->stacka[0] > data->stacka[1])
			sa(data);
	}
}

/*void	fill_stack(stack *s, int *tob, int top)
{
	int i = 0;

	while (i <= 8)
	{
		s->tab[i]= i;
		i++;
	}
	s->top = top;
}
#include <stdio.h>
int	main()
{
	int	tab[]={2,15,3,7,6,0,5,9,1};
	stack	a;
	stack	b;
	int	i=0;

	a = stack_creator();
	b = stack_creator();

	fill_stack(&a, tab, 8);
	while(i <= a.top)
	{
		printf("%d\n", a.tab[i]);
		i++;
	}
	printf("\n");
	algo(&a, &b);
	i=0;
	while(i <= a.top)
	{
		printf("%d\n", a.tab[i]);
		i++;
	}
}
*/