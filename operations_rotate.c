/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 20:46:35 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/26 20:51:01 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*La operación rotate desplaza todos los elementos de la pila una posición hacia arriba.
El primer elemento se va al final.
El segundo se convierte en el primero. */
void ft_rotate(t_stack **stack)
{
    t_stack *first;
    t_stack *last;
    // Comprueba si hay menos de dos elementos
    if (!*stack || !(*stack) ->next)
        return ;
    first = *stack; // Guarda el primer elemento de la pila en first
    *stack = first->next; // mover el top del stack al segundo nodo
    last = get_last_node(*stack); // utilizo la funcion de stacklast para asignar last como ultimo nodo
    first->next = NULL; // Quitar el link al segundo
    last->next = first; // Unes al ultimo el primero, haciendo de este el nuevo ultimo
}
void ra(t_stack **a)
{
    ft_rotate(a);
    ft_printf("ra\n");
}
void rb(t_stack **b)
{
    ft_rotate(b);
    ft_printf("rb\n");
}
void rr(t_stack **a, t_stack **b)
{
    ft_rotate(a);
    ft_rotate(b);
    ft_printf("rr\n");
}
