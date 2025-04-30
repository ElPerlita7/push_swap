/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:20:04 by abferrer          #+#    #+#             */
/*   Updated: 2025/01/31 17:12:32 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;
	char	*dst_data;
	char	*src_data;

	if (!src && !dst)
		return (NULL);
	count = 0;
	dst_data = (char *)dst;
	src_data = (char *)src;
	while (count < n)
	{
		dst_data[count] = src_data[count];
		count++;
	}
	return (dst_data);
}
/*
int	main(void)
{
	char src[] = "KELOKE, OH";
	char dst[20];

	ft_memcpy(dst, src, 13);

	printf("Destino: %s\n", dst);
	return(0);
}*/