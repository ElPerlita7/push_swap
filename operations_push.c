/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:05:15 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/04 21:36:25 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// Función que mueve el primer elemento de la pila 'source' a la pila 'destination'
void ft_push(t_stack **source, t_stack **destination)
{
// Si la pila de origen está vacía, no hay nada que mover, así que se sale de la función
    t_stack *source_second;

    if (*source == NULL)
        return;
    source_second = (*source)->next; // Guarda el segundo nodo de la pila de origen para no perder el resto de la lista
    (*source)->next = *destination; // El primer nodo de 'source' ahora apuntará al tope actual de la pila 'destination'
    *destination = *source; // 'destination' se actualiza para que su nuevo tope sea el nodo que estaba en 'source'
    *source = source_second; // 'source' se actualiza para que su nuevo tope sea el nodo que estaba segundo
}

void pa(t_stack **a, t_stack **b)
{
    ft_push(b, a);
    ft_printf("pa\n");
}

void pb(t_stack **a, t_stack **b)
{
    ft_push(a, b);
    ft_printf("pb\n");
}