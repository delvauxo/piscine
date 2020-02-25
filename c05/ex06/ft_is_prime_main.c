/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:14:52 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/19 14:03:18 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int i;
	int y;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	y = ft_sqrt(nb) + 1;
	i = 3;
	while (i < y)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(4));
	return (0);
}
