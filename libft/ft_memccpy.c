/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 12:57:32 by ghaas             #+#    #+#             */
/*   Updated: 2016/12/16 15:47:11 by ghaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char	*c1;
	char	*c2;

	c1 = (char*)s1;
	c2 = (char*)s2;
	while (n > 0 && *c2 != c)
	{
		*c1 = *c2;
		n--;
		c1 = c1 + 1;
		c2 = c2 + 1;
	}
	if (n > 0)
	{
		*c1 = *c2;
		c1 = c1 + 1;
		c2 = c2 + 1;
		return ((void*)c1);
	}
	else
		return (NULL);
}
