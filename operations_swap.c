/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:08:09 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/02 17:42:44 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_stack **stack)
{
    t_stack *first;
    t_stack *second;
    // Comprobueba si hay menos de dos elementos
    if (!*stack || !(*stack) ->next)
        return (NULL);
    // Guardamos los dos primeros nodos
    first = *stack; // 'first' apunta al nodo de arriba (top)
    second = (*stack)->next; // 'second' apunta al siguiente nodo
    
    // reordena los punteros    
    first->next = second->next; // el primer nodo apunta al tercero
    second->next = first; // el segundo nodo apunta al primero
    
    // Actualiza el top del stack
    *stack = second; // coloca el segundo nodo arriba
}
void sa(t_stack **a)
{
    swap(a);
    ft_printf("sa\n");
    
}
void sb(t_stack **b)
{
    swap(b);
    ft_printf("sb\n");
}
void ss(t_stack **a, t_stack **b)
{
    swap(a, b);
    ft_printf("ss\n");
}