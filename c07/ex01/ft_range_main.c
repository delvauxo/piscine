/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:02:44 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/20 15:10:01 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int 	size;
	int 	i;
	int 	j;

	size = max - min;

	if(!(tab = malloc((size) * sizeof(int))))
		return (0);

	if (min >= max)
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

int		main(void)
{
	int	*tablo;
	int i;
	int min = 5;
	int max = 15;

	tablo = ft_range(min, max);
	i = 0;
	while(i < (max - min))
	{
		printf("%d\n", tablo[i]);
		i++;
	}
	return (0);
}
