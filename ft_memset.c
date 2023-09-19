/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osvishch <osvishch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:58:49 by osvishch          #+#    #+#             */
/*   Updated: 2023/09/18 16:52:24 by osvishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;
	char	*byte_ptr;

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
/*
int main(void) {
    char buffer[20];

    ft_memset(buffer, 65, 5);

    for ( int i = 0; i < 11; i++) {
        printf("%c ", buffer[i]);
    }
    return (0);
}
*/
