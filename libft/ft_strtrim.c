/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:57:41 by abferrer          #+#    #+#             */
/*   Updated: 2025/01/29 20:07:37 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		back;
	char	*ret;

	front = 0;
	while (is_set(s1[front], set))
		front++;
	back = ft_strlen(s1) - 1;
	while (is_set(s1[back], set))
		back--;
	ret = ft_substr(s1, front, back - front + 1);
	return (ret);
}

// int main()
// {
// 	char *s1 = "  \t \n   \n\n\n\t";
// 	printf("%s", ft_strtrim(s1, " \n\t"));
// }