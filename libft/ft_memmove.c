/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 15:49:58 by ghaas             #+#    #+#             */
/*   Updated: 2016/12/16 15:50:01 by ghaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*srcc;
	char		*dstc;
	size_t		i;

	i = -1;
	srcc = (char *)src;
	dstc = (char *)dst;
	if (srcc < dstc)
	{
		while ((int)(--len) >= 0)
			*(dstc + len) = *(srcc + len);
	}
	else
	{
		while (++i < len)
			*(dstc + i) = *(srcc + i);
	}
	return (dst);
}
