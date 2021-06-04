/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:09:11 by bcoenon           #+#    #+#             */
/*   Updated: 2021/06/04 18:17:05 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words + 1);
}

int	ft_countletters(char const *s, char c, int i)
{
	int index;

	index = 0;
	while (i > 0)
	{
		if (s[index] == c)
			i--;
		index++;
	}
	while (s[index] != c)
	{
		i++;
		index++;
	}
	return (i + 1);
}

char	**ft_fill(char **tab, char const *s, char c)
{
	int	i;
	int	j;
	int index;

	i = 0;
	j = 0;
	index = 0;
	while (s[index])
	{
		while(s[index] != c)
		{
			tab[i][j] = s[index];
			j++;
			index++;
		}
		i++;
		index++;
		j = 0;
	}
	tab[i][j] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	int		letters;
	char	**tab;

	if (!s || !c)
		return (NULL);
	i = 0;
	words = ft_countwords(s, c);
	tab = (char **)malloc(sizeof(char*) * words);
	if (!tab)
		return (NULL);
	while (i < words)
	{
		letters = ft_countletters(s, c, i);
		tab[i] = (char *)malloc(sizeof(char) * letters);
		if (!tab[i])
			return (NULL);
		i++;
	}
	tab = ft_fill(tab, s, c);
	return (tab);
}
