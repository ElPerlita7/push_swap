/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:33:21 by abferrer          #+#    #+#             */
/*   Updated: 2025/01/31 17:03:00 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	int				i;
	unsigned long	dim;

	if (!s)
		return (NULL);
	dim = ft_strlen(s) - start;
	if (dim < len)
		len = dim;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	str = malloc ((sizeof(char) * len + 1));
	if (!str)
		return (NULL);
	while (i < (int)len && start <= ft_strlen(s))
		str[i++] = s[start++];
	str[i] = 0;
	return (str);
}
