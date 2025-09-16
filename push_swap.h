/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:23:24 by abferrer          #+#    #+#             */
/*   Updated: 2025/09/16 17:05:52 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"

typedef struct push_swap_node
{
    int value;  //Valor del nodo
    struct push_swap_node *next;  // Valor del siguiente nodo
} t_stack;
/*
typedef struct push_swap_list2
{
    t_stack stack_a;
    t_stack stack_b;
} t_stack2;
 */

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

// utils_stack.c
t_stack *create_node(int value);
void    print_stack(t_stack *stack);
t_stack *get_last_node(t_stack *stack);
void add_node_back(t_stack **stack, t_stack *new_node);

// parse_arg.c
int arg_isnum(char *tokens);
char **parse_arg_split(char **argv);
void arg_free(char **argv);
int count_arg(char **argv);
int arg_is_duplicated(char **argv);

// parse_stack.c
void arg_error(void);
int arg_int_in_range(char *str, int *output);
int parse_stack(char **tokens, t_stack **stack_a);

#endif 