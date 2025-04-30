/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 19:45:59 by abferrer          #+#    #+#             */
/*   Updated: 2025/01/27 20:30:31 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cast_dest;
	unsigned char	*cast_src;
	size_t			i;

	cast_dest = (unsigned char *)dest;
	cast_src = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (dest);
	else
	{
		if (cast_src < cast_dest)
		{
			while (++i <= n)
				cast_dest[n - i] = cast_src[n - i];
		}
		else
		{
			while (n--)
				*cast_dest++ = *cast_src++;
		}
		return (dest);
	}
}
/*
int main()
 {
 	char str[50] = "This is string.h library function\n";
	char str2[50] = "This is string.h library function\n";
	char str3[50] = "Quemiras";
	char str4[50] = "Queetasleyendo";
	printf("%s\n", memmove(str, str3, 10));
	printf("%s\n", ft_memmove(str2, str4, 10));
}*/