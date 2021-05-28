/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:13:29 by bcoenon           #+#    #+#             */
/*   Updated: 2021/05/28 14:52:58 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (s[i] == c)
		return ((char *)s + i);
	i--;
	while (i-- > 0 && s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
	}
	return (NULL);
}
