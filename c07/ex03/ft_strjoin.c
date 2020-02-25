/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:27:54 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/20 20:42:39 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_len_total(char **strs, int size)
{
	int size_total;
	int i;

	i = 0;
	while (i < size)
	{
		size_total = size_total + ft_strlen(strs[i]);
		i++;
	}
	return (size_total + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_full;
	int		i;

	if (size == 0)
	{
		str_full = malloc(sizeof(char));
		return (str_full);
	}
	if (!(str_full = malloc(sizeof(char) * ft_len_total(strs, size))))
		return (0);
	i = 0;
	while (i < size)
	{
		str_full = ft_strcat(str_full, strs[i]);
		if (i < size - 1)
			str_full = ft_strcat(str_full, sep);
		i++;
	}
	return (str_full);
}
