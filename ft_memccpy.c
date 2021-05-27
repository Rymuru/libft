/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:12:28 by bcoenon           #+#    #+#             */
/*   Updated: 2021/05/27 12:19:54 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t			i;
	unsigned char	*conv;
	unsigned char	*dest;
	unsigned char	charly;

	i = 0;
	conv = (unsigned char *)src;
	dest = (unsigned char *)dst;
	charly = c;
	if ((dst == src) || n == 0)
	{
		return (dst);
	}
	while (i < n)
	{
		dest[i] = conv[i];
		if (dest[i] == charly)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (0);
}
