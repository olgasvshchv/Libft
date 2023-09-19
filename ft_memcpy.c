/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osvishch <osvishch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:39:15 by osvishch          #+#    #+#             */
/*   Updated: 2023/09/14 14:30:47 by osvishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char			*s;
	char				*d;
	size_t				i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d != NULL && s != NULL)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char str1[] = "hello";
	char str2[] = "world";

	printf("%s\n", ft_memcpy(str1, str2, 5));
	return (0);
}
*/
