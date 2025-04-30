/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:39:06 by abferrer          #+#    #+#             */
/*   Updated: 2025/01/31 17:36:00 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				count;
	unsigned char const	*date;

	count = 0;
	date = (unsigned char const *)s;
	while (count < n)
	{
		if (date[count] == (unsigned char)c)
			return ((void *)(date + count));
		count++;
	}
	return (NULL);
}
