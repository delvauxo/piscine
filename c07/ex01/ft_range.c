/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:02:44 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/25 11:33:15 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int size;
	int i;
	int j;

	if (min >= max)
		return (0);
	size = max - min;
	if (!(tab = malloc((size) * sizeof(int))))
		return (0);
	i = 0;
	j = min;
	while (j < max)
	{
		tab[i] = j;
		i++;
		j++;
	}
	return (tab);
}
