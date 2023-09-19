/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osvishch <osvishch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:31:28 by osvishch          #+#    #+#             */
/*   Updated: 2023/09/13 18:48:57 by osvishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = 0;
	dst_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	while (dst[dst_len])
		dst_len++;
	if (dstsize > dst_len)
	{
		while (src[i] && i < dstsize - dst_len - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	if (dstsize == 0 || dstsize < dst_len)
		return (src_len + dstsize);
	return (src_len + dst_len);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "hello 42";
	char dst[] = "hello 42";
	size_t dstsize = 8;

	printf("%lu\n", ft_strlcat(dst, src, dstsize));
	printf("%lu\n", strlcat(dst, src, dstsize));
	return (0);
}
*/