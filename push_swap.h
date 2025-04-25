/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:23:24 by abferrer          #+#    #+#             */
/*   Updated: 2025/04/25 18:48:46 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdlib.h>
#include <stdio.h>

typedef struct push_swap_node
{
    int value;  //Valor del nodo
    struct push_swap_node *next;  // Valor del siguiente nodo
} t_stack;

// operations.c
void push (t_stack **source, t_stack **destination);
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);

// stack.c
t_stack *create_node(int value);
void    print_stack(t_stack *stack);

#endif