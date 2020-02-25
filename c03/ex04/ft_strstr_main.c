/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:00:00 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/14 01:40:36 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (str + i - j);
		}
		else
		{
			i = i - j;
			j = 0;
			i++;
		}
	}
	return (0);
}

int	main(void)
{
	char str[] = "DEABCDEF";
	char to_find[] = "DEF";
	char *ptr;
	char *ptr2;

	printf("%s\n", str);
	ptr2 = ft_strstr(str, to_find);
	printf("ME : %s\n", ptr2);
	ptr = strstr(str, to_find);
	printf("_OFFICIAL : %s\n", ptr);
	return (0);
}
