/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:02:04 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/17 16:51:47 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;
	res = s1[i] - s2[i];
	return (res);
}

int	main(void)
{
	char str1[] = "HellooN b ";
	char str2[] = "Helloon1";
	printf("%d\n", ft_strcmp(str1, str2));
	printf("OFFICIAL : %d\n", strcmp(str1, str2));
	return (0);
}
