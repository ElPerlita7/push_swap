/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:36:28 by abferrer          #+#    #+#             */
/*   Updated: 2025/01/29 19:37:54 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		k = 0;
		if (str[i] == (char)c)
		{
			k = i + 1;
			while (str[k] != (char)c)
			{
				if (!str[k])
					return ((char *)&str[i]);
				k++;
			}
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)str + i);
	return (NULL);
}

// int main()
// {
// 	printf("%s", ft_strrchr("KELEEEs", 'e'));
// }