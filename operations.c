/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:27:56 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/02 16:11:50 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// // Función que mueve el primer elemento de la pila 'source' a la pila 'destination'
// void push(t_stack **source, t_stack **destination) {
// // Si la pila de origen está vacía, no hay nada que mover, así que se sale de la función
//     if (*source == NULL) {
//         return;
//     }
//     t_stack *aux = (*source)->next; // Guarda el segundo nodo de la pila de origen para no perder el resto de la lista
//     (*source)->next = *destination; // El primer nodo de 'source' ahora apuntará al tope actual de la pila 'destination'
//     *destination = *source; // 'destination' se actualiza para que su nuevo tope sea el nodo que estaba en 'source'
//     *source = aux; // 'source' se actualiza para que su nuevo tope sea el nodo que estaba segundo
// }

// void pa(t_stack **a, t_stack **b) {
//     push(b, a);
//     printf("pa\n");
// }

// void pb(t_stack **a, t_stack **b) {
//     push(a, b);
//     printf("pb\n");
// }

// void swap(t_stack **stack, t_stack *first, t_stack *second)
// {
//     // Comprobueba si hay menos de dos elementos
//     if (!*stack || !(*stack) ->next)
//         return (NULL);
//     // Guardamos los dos primeros nodos
//     first = *stack; // 'first' apunta al nodo de arriba (top)
//     second = (*stack)->next; // 'second' apunta al siguiente nodo
    
//     // reordena los punteros    
//     first->next = second->next; // el primer nodo apunta al tercero
//     second->next = first; // el segundo nodo apunta al primero
    
//     // Actualiza el top del stack
//     *stack = second; // coloca el segundo nodo arriba
// }
// void sa(t_stack **a)
// {
//     swap(a);
//     ft_printf("sa\n");
    
// }
// void sb(t_stack **b)
// {
//     swap(b);
//     ft_printf("sb\n");
// }
// void ss(t_stack **a, t_stack **b)
// {
//     swap(a, b);
//     ft_printf("ss\n");#include "push_swap.h"
// }