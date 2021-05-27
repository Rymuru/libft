/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcoenon <bcoenon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:32:37 by bcoenon           #+#    #+#             */
/*   Updated: 2021/05/27 11:43:02 by bcoenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*conv;

	i = 0;
	conv = (unsigned char *)s;
	while (i < n)
	{
		conv[i] = 0;
		i++;
	}
	return (s = conv);
}
