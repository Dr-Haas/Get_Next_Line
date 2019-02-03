/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 16:20:23 by ghaas             #+#    #+#             */
/*   Updated: 2016/12/16 16:20:24 by ghaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
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
		ret[i] = f(i, *s);
		i++;
		s++;
	}
	return (ret);
}
