/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:38:16 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/10 18:25:09 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	
	i =  0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int main(void)
{
	printf("Characters : %d\n", ft_strlen(""));
	return (0);
}
