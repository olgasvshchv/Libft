/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osvishch <osvishch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:24:12 by osvishch          #+#    #+#             */
/*   Updated: 2023/09/18 16:50:43 by osvishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	char			*byte_ptr;

	byte_ptr = ptr;
	i = 0;
	if (byte_ptr != NULL)
	{
		while (i < num)
		{
			byte_ptr[i] = (unsigned char)value;
			i++;
		}
	}
	return (ptr);
}

void	*ft_calloc(size_t count, size_t size)
{
	void			*p;
	size_t			total_size;

	total_size = size * count;
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, total_size);
	return (p);
}
