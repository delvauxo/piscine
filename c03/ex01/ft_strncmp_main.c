/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 22:18:50 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/14 01:21:45 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				res;

	res = 0;
	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i < (n - 1))
	{
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
}

int	main(void)
{
	char str1[] = "Helloa";
	char str2[] = "Hello";

	printf("%d\n", ft_strncmp(str1, str2, 4));
	printf("OFFICIAL : %d\n", strncmp(str1, str2, 4));
	return (0);
}
