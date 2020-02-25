/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 01:43:28 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/12 03:05:10 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i])
	{

	}
	return (i);
}

int main(void)
{
	char ressrc[] = "Salut tout le monde !";
	char resdest[256];

	printf("%lu\n", strlcpy(resdest, ressrc, 10));
	printf("%u\n", ft_strlcpy(resdest, ressrc, 3));
	return (0);
}
