/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_safe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:11:05 by abferrer          #+#    #+#             */
/*   Updated: 2025/05/21 01:50:53 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int	ft_atoi_safe(const char *str)
{
	int	i;
	int	sign;
	long	num;
	int *error;

	i = 0;
	sign = 1;
	num = 0;
	*error = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		if((num * sign) > 2147483647 || (num * sign) < 2147483648)
		*error = 1;
	i++;
	}
	return((int)(num * sign));
}
// int main(int argc, char **argv)
// {
// 	int	i;
// 	int	result;

// 	if (argc < 2)
// 	{
// 		printf("Uso: ./a.out <números>\n");
// 		return (1);
// 	}
// 	i = 1;
// 	while (i < argc)
// 	{
// 		result = ft_atoi_safe(argv[i]);
// 		printf("Input: %s => Resultado: %d\n", argv[i], result);
// 		i++;
// 	}
// 	return (0);
// }