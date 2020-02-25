/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:27:05 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/11 10:10:55 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
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
