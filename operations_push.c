/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:05:15 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/02 16:05:18 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// Función que mueve el primer elemento de la pila 'source' a la pila 'destination'
void push(t_stack **source, t_stack **destination) {
// Si la pila de origen está vacía, no hay nada que mover, así que se sale de la función
    if (*source == NULL) {
        return;
    }
    t_stack *aux = (*source)->next; // Guarda el segundo nodo de la pila de origen para no perder el resto de la lista
    (*source)->next = *destination; // El primer nodo de 'source' ahora apuntará al tope actual de la pila 'destination'
    *destination = *source; // 'destination' se actualiza para que su nuevo tope sea el nodo que estaba en 'source'
    *source = aux; // 'source' se actualiza para que su nuevo tope sea el nodo que estaba segundo
}

void pa(t_stack **a, t_stack **b) {
    push(b, a);
    printf("pa\n");
}

void pb(t_stack **a, t_stack **b) {
    push(a, b);
    printf("pb\n");
}