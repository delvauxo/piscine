/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 00:31:49 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/12 16:39:38 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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