/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:59:18 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/18 20:14:59 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long i;

	i = nb;
	if (nb >= 0)
		i = nb;
	else
	{
		ft_putchar('-');
		i = i * (-1);
	}
	if (i < 10)
		ft_putchar(i + '0');
	else if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putchar(i % 10 + '0');
	}
}
