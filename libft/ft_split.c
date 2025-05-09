/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:31:10 by abferrer          #+#    #+#             */
/*   Updated: 2025/01/31 16:44:31 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
			cnt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cnt);
}

char	**free_words(char **tab, int j)
{
	while (j >= 0)
		free(tab[j--]);
	free(tab);
	return (NULL);
}

char	**fill_tab_with_words(char **tab, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] != c && s[i])
			i++;
		if (i > k)
		{
			tab[j] = ft_substr(s, k, i - k);
			if (!tab[j])
				return (free_words(tab, j - 1));
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	return (fill_tab_with_words(tab, s, c));
}

// int main()
// {
// 	char *string = "      split       this    for   me  !       ";
// 	char **tab;
// 	tab = ft_split(string, ' ');
// 	for(int i = 0; i < 5; i++)
// 		printf("%s\n", tab[i]);
// }