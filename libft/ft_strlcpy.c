/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:10:09 by abferrer          #+#    #+#             */
/*   Updated: 2025/01/31 17:31:48 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	position;

	if (size == 0)
		return (ft_strlen(src));
	position = 0;
	while (src[position] && position < (size - 1))
	{
		dest[position] = src[position];
		position++;
	}
	dest[position] = 0;
	return (ft_strlen(src));
}
