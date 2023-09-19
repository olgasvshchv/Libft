/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osvishch <osvishch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:33:09 by osvishch          #+#    #+#             */
/*   Updated: 2023/09/11 16:53:08 by osvishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
int main(void)
{
    int nonPrintable = '\t';

    if (ft_isprint(nonPrintable)) {
        printf("The input string contains only ASCII characters.\n");
    } else {
        printf("The input string contains non-ASCII characters.\n");
    }

    return (0);
}
*/