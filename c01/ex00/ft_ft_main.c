/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 09:35:57 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/10 13:40:01 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int a;
	int *nbr;

	a = 9;
	nbr = &a;
	printf("%d\n", a);
	ft_ft(nbr);
	printf("%d\n", a);
	return (0);
}
