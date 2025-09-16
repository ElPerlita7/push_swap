/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 17:10:09 by abferrer          #+#    #+#             */
/*   Updated: 2025/09/16 17:13:47 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a = NULL;
	char	**tokens;

	if (argc < 2)
		return (0);
	tokens = parse_arg_split(argv);
	if (!tokens)
	{
		printf("Error tras parse_arg_split\n");
		return (1);
	}
	if (!parse_stack(tokens, &stack_a))
	{
		printf("Error tras parse_stack\n");
		arg_free(tokens);
		return (1);
	}
	print_stack(stack_a);
	// arg_free(stack_a);
	arg_free(tokens);
	return (0);
}