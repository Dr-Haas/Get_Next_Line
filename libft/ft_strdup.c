/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 16:09:49 by ghaas             #+#    #+#             */
/*   Updated: 2016/12/26 12:21:32 by ghaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		strlen;
	char	*strdup;

	i = 0;
	strlen = ft_strlen((char*)str);
	if ((strdup = (char*)malloc((strlen + 1) * sizeof(*str))) == NULL)
		return (NULL);
	strdup[strlen + 1] = '\0';
	while (i <= strlen)
	{
		strdup[i] = str[i];
		i++;
	}
	return (strdup);
}
