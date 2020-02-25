/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 17:03:58 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/17 17:04:03 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
