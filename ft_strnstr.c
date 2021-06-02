/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:06:54 by bcoenon           #+#    #+#             */
/*   Updated: 2021/06/02 11:18:10 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (!n[0])
		return ((char *)h);
	i = 0;
	while (h[i] && i < len)
	{
		j = 0;
		while (h[i + j] && n[j]
			&& i + j < len && h[i + j] == n[j])
			j++;
		if (!n[j])
			return ((char *)(h + i));
		i++;
	}
	return (NULL);
}
