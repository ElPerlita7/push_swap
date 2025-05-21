/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 00:21:10 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/21 02:51:15 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void arg_error(void)
{
    wirte (2, "Error\n", 6);
    exit(1);
}
int arg_int_in_range(char *str)
{
    int num;
    int error_flag;

     num = ft_atoi_safe(str, &error_flag);
    if (error_flag)
        return(0);
    return(1);
}
int parse_stack(char **tokens, t_stack **stack)
{
    int i;
    int num;
    t_stack *node;

    i = 0;
    while(tokens[i])
    {
        if (!arg_isnum(tokens[i]))
            arg_error();
        if (!arg_is_duplicated(tokens[i]))
            arg_error();
        num = ft_atoi_safe(tokens[i]);
        if (!arg_int_in_range(tokens[i]))
            arg_error_error();
        node = create_node(num);
        if (!node)
            arg_error();
    }
}