/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 14:30:09 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/18 19:00:02 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb >= 1)
	{
		res = nb * ft_recursive_factorial(nb - 1);
	}
	return (res);		
}

int	main (int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
	return (0);	
}
