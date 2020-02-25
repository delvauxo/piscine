/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <odelvaux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:38:20 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/08 19:41:53 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	nbr1;
	char	nbr2;
	char	nbr3;

	nbr1 = '0' - 1;
	while (++nbr1 <= '9')
	{
		nbr2 = nbr1;
		while (++nbr2 <= '9')
		{
			nbr3 = nbr2;
			while (++nbr3 <= '9')
			{
				if (nbr1 != '0' || nbr2 != '1' || nbr3 != '2')
					write(1, ",", 1);
				if (nbr1 != '0' || nbr2 != '1' || nbr3 != '2')
					write(1, " ", 1);
				write(1, &nbr1, 1);
				write(1, &nbr2, 1);
				write(1, &nbr3, 1);
			}
		}
	}
}
