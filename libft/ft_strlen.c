/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:56:56 by abferrer          #+#    #+#             */
/*   Updated: 2025/01/31 17:24:36 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "Listo el que lo lea";
	int result = ft_strlen(s);

	printf("La longitud es: %d\n", count);
	return (0);
}*/