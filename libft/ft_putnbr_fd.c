/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 11:07:41 by ghaas             #+#    #+#             */
/*   Updated: 2016/12/26 11:07:44 by ghaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar_fd(int c, int fd)
{
	write(fd, &c, 1);
}

static void	ft_putstr_fd(char *str, int fd)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}

void		ft_putnbr_fd(int nb, int fd)
{
	if (nb > 2147483647 || nb < -2147483648)
		return ;
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar_fd('-', fd);
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + 48, fd);
		return ;
	}
	ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + 48, fd);
	return ;
}
