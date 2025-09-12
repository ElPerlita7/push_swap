/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 22:34:21 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/26 20:51:04 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
La operación reverse rotate desplaza todos los elementos de la pila una posición hacia abajo.
El último elemento sube al top (inicio).
Todos los demás se mueven una posición hacia abajo.
*/
void ft_reverse(t_stack **stack)
{
    t_stack *last;
    t_stack *prev;
    // Comprobueba si hay menos de dos elementos
    if (!*stack || !(*stack) ->next)
        return ;
    last = *stack;
    prev = NULL;
    // Recorre has el ultimo nodo del stack
    while (last->next)
    {
        prev = last; // Guardo el nodo actual (last) en prev
        last = last->next; // Avanza last al siguiente nodo
        // Alfinal del bucle, last apuntara al ultimo nodo y prev al penultimo
    }
    prev->next = NULL; // Asigna prev al ultimo nodo de la lista
    last->next = *stack; // Conecta last como el primero del stack
    *stack = last; // Apunta stack al primer nodo de la lista
}
void rra(t_stack **a)
{
    ft_reverse(a);
    ft_printf("ra\n");
}
void rrb(t_stack **b)
{
    ft_reverse(b);
    ft_printf("rb\n");
}
void rrr(t_stack **a, t_stack **b)
{
    ft_reverse(a);
    ft_reverse(b);
    ft_printf("rrr\n");
}