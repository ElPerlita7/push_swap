/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:48:49 by abferrer          #+#    #+#             */
/*   Updated: 2025/01/31 17:03:57 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_size(int aux)
{
	int	count;

	count = 0;
	while (aux != 0)
	{
		count++;
		aux /= 10;
	}
	return (count);
}

char	*min_case(void)
{
	char	*num;

	num = malloc(sizeof(char) * 12);
	if (!num)
		return (NULL);
	ft_strlcpy(num, "-2147483648", 12);
	return (num);
}

char	*filltable(int n, int count)
{
	char	*str;
	int		first;

	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	first = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		first = 1;
	}
	str[count] = 0;
	if (n == 0)
		str[count - 1] = (n % 10) + 48;
	while (count > first)
	{
		str[count - 1] = (n % 10) + 48;
		n /= 10;
		count--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*num;
	int		aux;

	aux = n;
	count = 0;
	if (aux < 0 || aux == 0)
		count++;
	count += num_size(aux);
	if (n == -2147483648)
		num = min_case();
	else
		num = filltable(n, count);
	return (num);
}
