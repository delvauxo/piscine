/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 10:43:59 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/11 12:09:16 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int	main(void)
{
	char arraysrc[] = "Bonjour";
	char arraydest[15];

	printf("Source : %s\n", arraysrc);
	ft_strcpy(arraydest, arraysrc);
	printf("Copy : %s\n", arraydest);
	printf("Last Char : %c\n", arraydest[7]);

	char chararray[] = "Salut";
	char charcpy[200];

	printf("array : %s\n", chararray);
	strcpy(charcpy, chararray);
	printf("array copy : %s\n", charcpy);
	return (0);
}
