/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:38:20 by bcoenon           #+#    #+#             */
/*   Updated: 2021/06/11 16:33:13 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word(char const *s, char c)
{
	int	word;
	int	state;

	state = 1;
	word = 0;
	while (*s)
	{
		if (*s == c)
			state = 1;
		else
		{
			if (state == 1)
				word++;
			state = 0;
		}
		s++;
	}
	return (word);
}

int	ft_letters(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	if (s == 0)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!tab)
		return (NULL);
	while (ft_word(s, c))
	{
		while (*s && *s == c)
			s++;
		tab[i] = (char *)malloc(sizeof(char) * (ft_letters(s, c) + 1));
		if (!tab[i])
			return (ft_free(tab));
		j = 0;
		while (*s && *s != c)
			tab[i][j++] = *s++;
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
