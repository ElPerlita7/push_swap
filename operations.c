/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:27:56 by abferrer          #+#    #+#             */
/*   Updated: 2025/04/25 18:34:00 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_stack **source, t_stack **destination) {
    
    if (*source == NULL) {
        return;
    }

    t_stack *aux = (*source)->next;
    (*source)->next = *destination;
    *destination = *source;
    *source = aux;
}

void pa(t_stack **a, t_stack **b) {
    push(b, a);
}

void pb(t_stack **a, t_stack **b) {
    push(a, b);
}
