/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 23:34:48 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/13 01:03:25 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	while (str1[i])
		i++;
	j = 0;
	while (str2[j])
	{
		str1[i + j] = str2[j];
		j++;
	}
	str1[i + j] = '\0';
	return (str1);
}

int	main(void)
{
	char res1[] = "DEF";
	char res2[] = "ABC";

	ft_strcat(res2, res1);
	printf("%s\n", res2);
	return (0);
}
