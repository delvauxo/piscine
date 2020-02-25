/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:40:52 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/12 19:25:22 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i]
						<= 'z') || (str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
	if (str[i] == '\0')
		return (1);
}

int	main(void)
{
	char res[] = "";

	printf("%d\n", ft_str_is_alpha(res));
	return (0);
}
