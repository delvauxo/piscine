/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cols.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:47:16 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/17 23:35:48 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	**ft_set_pov_from_args(char *str);

char	**ft_check_cols()
{
	char	**box;
	char	*str;

	printf("STR ::: %s\n", str);

	box = ft_set_pov_from_args(str);
	printf("BOXXX ::: %s\n", *box);
	
	int i;
	int j;

	// Check cols.
	i = 1;
	j = 0;
	while (i < 5)
	{
		if (box[i][j] == '4')
		{
			if (box[i][j + 5] == '1')
			{
				while (j++ < 5)
				{
					box[i][j] = j + '0';
				}
			}
		}
		i++;
		j = 0;
	}
	return (box);
}
