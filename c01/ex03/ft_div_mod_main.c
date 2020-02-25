/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 14:09:06 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/10 16:00:55 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int c;
	int d;

	c = a / b;
	d = a % b;

	*div = c;
	*mod = d;
}

int main(void)
{
	int *div;
	int *mod;
	int a;
	int b;
	
	a = 1;
	b = 2;
	div = &a;
	mod = &b;
	printf("%d  %d\n", a, b);
	ft_div_mod(52, 3, a, mod);
	printf("%d  %d\n", a, b);
	return (0);
}
