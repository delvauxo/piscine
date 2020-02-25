/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 10:07:01 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/18 14:25:17 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb <= 0)
		return (0);
	while (nb > 1)
	{
		res = res * nb--;
	}
	res = res * nb;
	return (res);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if(argc != 2)
		return (0);
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));

	return (0);
}
