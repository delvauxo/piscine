/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:40:52 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/12 16:19:09 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') ||
					(str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}