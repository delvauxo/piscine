/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:01:33 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/10 16:44:38 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = (*a) / (*b);
	mod = (*a) % (*b);

	*a = div;
	*b = mod;
}

int	main(void)
{
	int *a;
	int *b;
	int x;
	int y;

	x = 49;
	y = 8;
	a = &x;
	b = &y;
	printf("%d - %d\n", x, y);
	ft_ultimate_div_mod(a, b);
	printf("%d - %d\n", x, y);
	return (0);
}
