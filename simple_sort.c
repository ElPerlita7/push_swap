/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 18:12:38 by abferrer          #+#    #+#             */
/*   Updated: 2025/09/24 20:33:34 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min_pos(t_stack *stack)
{
    int min = stack->value;
    int pos = 0;
    int min_pos = 0;
    t_stack *tmp = stack;

    while (tmp)
    {
        if (tmp->value < min)
        {
            min = tmp->value;
            min_pos = pos;
        }
        tmp = tmp->next;
        pos++;
    }
    return min_pos;
}

void sort_three(t_stack **a)
{
    int first = (*a)->value;
    int second = (*a)->next->value;
    int third = (*a)->next->next->value;

    if (first > second && second < third && first < third)
        sa(a, 'a'); // caso 2 1 3
    else if (first > second && second > third)
    {
        sa(a, 'a');
        rra(a); // caso 3 2 1
    }
    else if (first > second && second < third && first > third)
        ra(a); // caso 3 1 2
    else if (first < second && second > third && first < third)
    {
        sa(a, 'a');
        ra(a); // caso 2 3 1
    }
    else if (first < second && second > third && first > third)
        rra(a); // caso 1 3 2
}

void simple_sort(t_stack **a)
{
    t_stack *b = NULL;
    int size = stack_size(*a);

    if (size == 2)
    {
        if ((*a)->value > (*a)->next->value)
            sa(a, 'a');
    }
    else if (size == 3)
        sort_three(a);
    else if (size == 4 || size == 5)
    {
        int min_pos = find_min_pos(*a);
        if (min_pos <= size / 2)
            while (min_pos-- > 0)
                ra(a);
        else
        {
            int moves = size - min_pos;
            while (moves-- > 0)
                rra(a);
        }
        pb(a, &b);          // ya no necesita flag
        simple_sort(a);     // ordenar lo que queda
        pa(a, &b);          // pa también sin flag
    }
}
