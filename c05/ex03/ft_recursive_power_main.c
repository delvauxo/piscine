/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 21:22:34 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/18 23:29:30 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int res;
	
	res = 1;
	if (power < 0)
		return (0);
	if (power > 0)
	{
		res = nb * ft_recursive_power(nb, power - 1);
	}
	return (res);
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 3));
	return (0);
}
