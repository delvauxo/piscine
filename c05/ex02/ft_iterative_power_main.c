/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:14:22 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/18 21:19:46 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

int	main()
{
	printf("%d\n", ft_iterative_power(0, 0));
	return (0);
}
