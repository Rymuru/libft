/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:12:44 by bcoenon           #+#    #+#             */
/*   Updated: 2021/05/28 12:06:44 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*conv;
	unsigned char	*dest;

	conv = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (dst == NULL && src == NULL)
		return (dest);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len--)
	{
		dest[len] = conv[len];
	}
	return (dst = dest);
}
