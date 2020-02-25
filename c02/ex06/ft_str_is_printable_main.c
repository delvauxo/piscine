/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 22:37:25 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/11 23:28:46 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
	if (str[i] == '\0')
		return (1);
}

int main(void)
{
	char res[3];

	res[0] = 6;
	res[1] = 5;
	res[2] = 127;

	printf("%d\n", ft_str_is_printable(res));
	return (0);
}
