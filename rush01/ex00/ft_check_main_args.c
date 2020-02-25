/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_main_args.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 11:23:18 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/18 10:27:42 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);
	
int	ft_check_main_args(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (((i % 2) == 0) && !(((str[i] >= '1') && (str[i] <= '4'))))
		{
			printf("PAIR : %d\n", (i % 2));
			printf("RESTE : %d\n", (i % 2));
			printf("INDEX : %d\n", i);
			printf("VALUE : %c\n", str[i]);
			ft_putstr("Error1\n");
			return (0);
		}
		else if (((i % 2 != 0) && !(str[i] == ' ')))
		{
			printf("IMPAIR : %d\n", (i % 2));
			printf("RESTE : %d\n", (i % 2));
			printf("INDEX : %d\n", i);
			printf("VALUE : %c\n", str[i]);
			ft_putstr("Error2\n");
			return (0);
		}
		else
			i++;
	}
	return (1);
}
