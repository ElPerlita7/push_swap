/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:23:24 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/07 02:50:19 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdlib.h>
#include <stdio.h>
#include "./libft/libft.h"

typedef struct push_swap_node
{
    int value;  //Valor del nodo
    struct push_swap_node *next;  // Valor del siguiente nodo
} t_stack;

// operations.push.c
void ft_push (t_stack **source, t_stack **destination);
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);

// operations.swap.c
void ft_swap(t_stack **stack);
void sa(t_stack **a, char flag);
void sb(t_stack **b, char flag);
void ss(t_stack **a, t_stack **b);

// operations_rotate.c
void ft_rotate(t_stack **stack);
void ra(t_stack **a);
void rb(t_stack **b);
void rr(t_stack **a, t_stack **b);

// operations_reverse.c
void ft_reverse(t_stack **stack);
void rra(t_stack **a);
void rrb(t_stack **b);
void rrr(t_stack **a, t_stack **b);

// stack.c
t_stack *create_node(int value);
void    print_stack(t_stack *stack);
t_stack *add_last_node(t_stack *stack);
int count_arg(char **argv);

#endif