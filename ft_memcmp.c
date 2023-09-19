/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osvishch <osvishch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:38:32 by osvishch          #+#    #+#             */
/*   Updated: 2023/09/19 13:28:57 by osvishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (str1 != NULL && str2 != NULL)
	{
		while (i < n)
		{
			if (str1[i] != str2[i])
				return ((int)str1[i] - str2[i]);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	
	char str1[] = "hello world";
	char str2[] = "";
	size_t n = 5;

	printf("%d\n", ft_memcmp(str1, str2, n));
	
	printf("%d\n", ft_memcmp("abcdef", "abc\375xx", 5));
	printf("%d\n", memcmp("abcdef", "abc\375xx", 5));
	return (0);
}
*/