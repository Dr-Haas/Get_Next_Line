/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 16:19:57 by ghaas             #+#    #+#             */
/*   Updated: 2016/12/16 16:19:59 by ghaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*ret;
	size_t	retlen;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	retlen = ft_strlen(s);
	if (!(ret = ft_memalloc(retlen + 1)))
		return (NULL);
	while (*s)
	{
		ret[i++] = f(*s);
		s++;
	}
	return (ret);
}
