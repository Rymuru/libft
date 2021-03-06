/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:12:28 by bcoenon           #+#    #+#             */
/*   Updated: 2021/05/27 17:01:26 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	size_t			i;
	unsigned char	*conv;
	unsigned char	*dest;
	unsigned char	charly;

	i = 0;
	conv = (unsigned char *)s;
	dest = (unsigned char *)d;
	charly = c;
	while (i < n)
	{
		dest[i] = conv[i];
		if (dest[i] == charly)
		{
			return (d + i + 1);
		}
		i++;
	}
	return (0);
}
