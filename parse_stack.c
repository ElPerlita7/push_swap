/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 00:21:10 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/30 15:45:57 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void arg_error(void)
{
    write (2, "Error\n", 6);
    exit(1);
}
int arg_int_in_range(char *str)
{
    int *error_flag;

    ft_atoi_safe(str, error_flag);
    if (error_flag)
        return(0);
    return(1);
}
int parse_stack(char **tokens, t_stack **stack_a)
{
    int i;
    int num;
    t_stack *node;
    int *error_flag;

    i = 0;
    while(tokens[i])
    {
        if (!arg_isnum(tokens[i]))
            arg_error();
        if (arg_is_duplicated(tokens[i]))
            arg_error();
        num = ft_atoi_safe(tokens[i], error_flag);
        if (!arg_int_in_range(tokens[i]))
            arg_error();
        node = create_node(num);
        if (!node)
            arg_error();
        add_node_back(stack_a, node);
        i++;
    }
}
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
		arg_free(tokens); // Asegúrate de tener esta función
		return (1);
	}
	print_stack(stack_a); // Opcional: para verificar visualmente
	arg_free(stack_a);
	arg_free(tokens);
	return (0);
}
