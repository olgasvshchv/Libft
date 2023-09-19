/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osvishch <osvishch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:30:07 by osvishch          #+#    #+#             */
/*   Updated: 2023/09/13 18:11:39 by osvishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int nonAscii = 128;
	printf("%d\n", ft_isascii(nonAscii));
	printf("%d\n", isascii(nonAscii));
	return (0);
}
*/