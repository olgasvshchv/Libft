/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osvishch <osvishch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:58:03 by osvishch          #+#    #+#             */
/*   Updated: 2023/09/19 15:14:34 by osvishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*byte_ptr;

	byte_ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)byte_ptr[i] == (unsigned char)c)
			return (byte_ptr + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "hello world";
	char c = 'l';
	size_t n = 5;

	printf("%s\n", ft_memchr(str, c, n));
	return (0);
}
*/