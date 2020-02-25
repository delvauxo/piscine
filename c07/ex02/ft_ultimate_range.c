/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:05:59 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/20 18:01:55 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;
	int size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	if (!(*range = malloc((size) * sizeof(int))))
		return (0);
	i = 0;
	j = min;
	while (j < max)
	{
		(*range)[i] = j;
		i++;
		j++;
	}
	return (size);
}
