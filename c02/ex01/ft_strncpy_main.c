/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:30:10 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/12 17:33:21 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 12:49:02 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/12 17:17:14 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n) 
	{
		dest[i] = 't';
		i++;
	}
	if (src[i] == '\0')
		dest[i] = src[i];
	return (dest);
}

int main (void)
{
	char 	srcarray[] = "Welcome home !";
	char	destarray[200];

	printf("SRC : %s\n", srcarray);
	ft_strncpy(destarray, srcarray, 153);
	printf("DEST : %s\n", destarray);

	char src[] = "Hello World !";
	char dest[20];

	printf("SRC : %s\n", src);
	strncpy(dest, src, 3);
	printf("DEST : %s\n", dest);
}
