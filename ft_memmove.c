/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osvishch <osvishch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:59:02 by osvishch          #+#    #+#             */
/*   Updated: 2023/09/18 17:56:12 by osvishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*d;
	const char		*s;
	size_t			i;

	d = (char *)dst;
	s = (const char *)src;
	i = 0;
	if (d != NULL && s != NULL)
	{
		if (d < s)
		{
			while (i < len)
			{
				d[i] = s[i];
				i++;
			}
		}
		else if (d > s)
		{
			i = len;
			while (i-- > 0)
				d[i] = s[i];
		}
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[20] = "helloworld";
	char str2[20] = "helloworld";
	char str3[15] = "helloworld";

	printf("%s\n", str1 + 5);
	printf("%s\n", ft_memmove(str1 + 5, str1, 12));
	printf("%s\n", memmove(str2 + 5, str2, 12));
	printf("%s\n", memcpy(str3 + 5, str3, 10));
	return (0);
}
*/