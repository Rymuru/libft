/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:50:42 by bcoenon           #+#    #+#             */
/*   Updated: 2021/05/27 12:06:55 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*conv;
	unsigned char	*dest;

	i = 0;
	conv = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if ((dst == src) || n == 0)
	{
		return (dst);
	}
	while (i < n)
	{
		dest[i] = conv[i];
		i++;
	}
	return (dst = dest);
}
