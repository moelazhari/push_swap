#include "push_swap.h"

void rra(t_data *data)
{
    int *stack;
    int i;

    i = 0;
    stack = malloc(data->asize * sizeof(int));
    while (i < data->asize)
    {
        stack[i] = data->stacka[i];
        i++;
    }
    i = 0;
    data->stacka[0] = data->stacka[data->asize - 1];
    i++;
    while (i < data->asize)
    {
        data->stacka[i] = stack[i - 1];
        i++;
    }
    free(stack);
}

void rrb(t_data *data)
{
    int *stack;
    int i;

    i = 0;
    stack = malloc(data->bsize * sizeof(int));
    while (i < data->bsize)
    {
        stack[i] = data->stackb[i];
        i++;
    }
    i = 0;
    data->stackb[0] = data->stackb[data->bsize - 1];
    i++;
    while (i < data->bsize)
    {
        data->stackb[i] = stack[i - 1];
        i++;
    }
    free(stack);
}

void rrr(t_data *data)
{
    rra(data);
    rrb(data);
}
