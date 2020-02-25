/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:12:37 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/10 13:39:22 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int a;
	int *********nbr;
	int ********nbr2;
	int *******nbr3;
	int ******nbr4;
	int *****nbr5;
	int ****nbr6;
	int ***nbr7;
	int **nbr8;
	int *nbr9;

	a = 8;
	nbr9 = &a;
	nbr8 = &nbr9;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr = &nbr2;

	printf("%d\n", a);
	ft_ultimate_ft(nbr);
	printf("%d\n", a);
	return (0);
}
