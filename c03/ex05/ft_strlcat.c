/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 21:15:52 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/14 01:08:45 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
//{
//	
//}

int	main(void)
{
	char dest1[] = "WORLD";
//	char dest2[] = "WORLD ";
//	char dest3[] = "WORLD ";
//	char dest4[] = "WORLD ";
//	char dest5[] = "WORLD ";
	char str2[] = "OF GOO !";

//	printf("SIZE OF : %lu\n", sizeof dest1);
//	printf("SIZE OF : %lu\n", strlen(dest1));
//	printf("BEFORE : %s\n", dest1);
//	strlcpy(dest1, str1, 15);
	printf("%lu\n", strlcat(dest1, str2, 6));
		printf("%s\n", dest1);
		printf("%s\n", str2);
		printf("%lu\n", strlen(dest1));
		printf("%lu\n", strlen(str2));
//	printf("%lu\n", strlcat(dest2, str2, 20));
//	printf("%lu\n", strlcat(dest3, str2, 25));
//	printf("%lu\n", strlcat(dest4, str2, 20));
//	printf("%lu\n", strlcat(dest5, str2, 27));
//	printf("AFTER : %s\n", dest1);
//	printf("SIZE OF : %lu\n", sizeof dest1);
//	printf("SIZE OF : %lu\n", strlen(dest1));
	return (0);
}
