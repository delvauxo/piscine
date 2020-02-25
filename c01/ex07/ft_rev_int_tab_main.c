/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:27:05 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/10 20:40:18 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int tab_tmp[size];
	int i;

	i = 0;
	while (i <= size - 1)
	{
		tab_tmp[i] = tab[size - 1 - i];
		i++;
	}
	i = 0;
	while (i <= size - 1)
	{
		tab[i] = tab_tmp[i];
		i++;
	}
}

int main(void)
{
	int tabz[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int i;

	ft_rev_int_tab(tabz, 10);

	i = 0;
	while (i <= 9)
	{
		printf("%d", tabz[i]);
		i++;
	}

	return (0);
}
