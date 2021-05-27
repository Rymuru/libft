/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:12:44 by bcoenon           #+#    #+#             */
/*   Updated: 2021/05/27 17:03:21 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (dst == src || len == 0)
	{
		return (dst);
	}
	if (source < dest)
	{
		while (dest)
		{
			*(dest + i) = *(source + i);
		}
		return (dst);
	}
	while (i < len)
	{
		*dest++ = *source++;
		i++;
	}
	return (dst);
}
