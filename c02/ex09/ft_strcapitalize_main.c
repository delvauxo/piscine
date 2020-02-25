/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 00:31:49 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/12 19:32:28 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	while (str[i])
	{
		if (!((str[i - 1] >= 65 && str[i - 1] <= 90) || (str[i - 1] >= 97 &&
				str[i - 1] <= 122) || (str[i - 1] >= 48 && str[i - 1] <= 57))
				&& (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		if (((str[i - 1] >= 'A' && str[i - 1] <= 'Z') || 
					(str[i - 1] >= 'a' && str[i - 1] <= 'z') || 
					(str[i - 1] >= '0' && str[i - 1] <= '9')) && 
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char res[] = "saLut, com*ment tu vas ? 42mots qua/rOnte-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(res));
	return (0);
}
