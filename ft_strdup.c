/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osvishch <osvishch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:44:15 by osvishch          #+#    #+#             */
/*   Updated: 2023/09/18 17:45:15 by osvishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	size;

	size = ft_strlen(s1);
	s2 = (char *)malloc(size + 1);
	if (s2 == NULL)
		return (NULL);
	ft_memcpy(s2, s1, size);
	s2[size] = '\0';
	return (s2);
}
/*
#include <stdio.h>
int main(void)
{
	char *s1 = "Hello";
	char *s2 = ft_strdup(s1);
	printf("%s\n", s2);
	return (0);
}
*/