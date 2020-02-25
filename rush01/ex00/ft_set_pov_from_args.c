/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_pov_from_args.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:20:43 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/17 16:28:41 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_map_init(void);

char	**ft_set_pov_from_args(char *str)
{
	char **box;

	box = ft_map_init();

//	printf("%c\n", str[0]);

	box[1][0] = str[0];
	box[2][0] = str[2];
	box[3][0] = str[4];
	box[4][0] = str[6];

	printf("BOX : %s\n", *box);
	printf("BOX : %s\n", box[1]);
	printf("BOX : %s\n", box[2]);
	printf("BOX : %s\n", box[3]);
	printf("BOX : %s\n", box[4]);
	printf("BOX : %s\n", box[5]);
	
	printf("ARGV[1] : %s\n", str);
	return (box);
}
