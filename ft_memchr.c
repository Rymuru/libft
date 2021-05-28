/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:27:28 by bcoenon           #+#    #+#             */
/*   Updated: 2021/05/28 11:33:21 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*conv;
	unsigned char	charly;

	i = 0;
	conv = (unsigned char *)s;
	charly = c;
	while (i < n)
	{
		if (conv[i] == charly)
			return (conv + i);
		i++;
	}
	return (0);
}
