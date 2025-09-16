/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 00:21:10 by abferrer          #+#    #+#             */
/*   Updated: 2025/09/16 17:31:20 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void arg_error(void)
{
    write (2, "Error en el argumento\n", 23);
    
    exit(1);
}
int arg_int_in_range(char *str, int *output)
{
    int error_flag = 0;

    *output = ft_atoi_safe(str, &error_flag);
    if (error_flag)
        return(0);
    return(1);
}
int parse_stack(char **tokens, t_stack **stack_a)
{
    int i;
    int num;
    t_stack *node;

    i = 0;

    if (arg_is_duplicated(tokens)) {
        ft_printf("error en arg is duplicated\n");
        arg_error();
    }

    while(tokens[i])
    {
        if (!arg_isnum(tokens[i])) {
            ft_printf("error en arg is num\n");
            arg_error();
        }
        
        if (!arg_int_in_range(tokens[i], &num)) {
            printf("num es %d\n", num);
            ft_printf("error en arg int in range\n");
            arg_error();
        }

        node = create_node(num);
        if (!node) {
            ft_printf("error en create_node\n");
            arg_error();
        }

        add_node_back(stack_a, node);
        i++;
    }

    return (1);
}
/*
int	main(int argc, char **argv)
{
	t_stack	*stack_a = NULL;
	char	**tokens;

	if (argc < 2)
		return (0);
	tokens = parse_arg_split(argv);
	if (!tokens)
	{
		printf("Error\n");
		return (1);
	}
	if (!parse_stack(tokens, &stack_a))
	{
		printf("Error\n");
		arg_free(tokens);
		return (1);
	}
	print_stack(stack_a);
	arg_free(stack_a);
	arg_free(tokens);
	return (0);
}
    */
