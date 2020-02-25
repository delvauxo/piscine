/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:41:56 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/19 10:48:32 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int res;

	res = 0;
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index > 1)
	{
		res = res + ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (res);
}
