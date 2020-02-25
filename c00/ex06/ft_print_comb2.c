/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:14:43 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/08 19:49:37 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 0;
	while (nbr1 <= 98)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 99)
		{
			ft_putchar(nbr1 / 10 + 48);
			ft_putchar(nbr1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(nbr2 / 10 + 48);
			ft_putchar(nbr2 % 10 + 48);
			if (nbr1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nbr2++;
		}
		nbr1++;
	}
}
