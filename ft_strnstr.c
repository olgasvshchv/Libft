/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osvishch <osvishch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:50:33 by osvishch          #+#    #+#             */
/*   Updated: 2023/09/19 15:41:20 by osvishch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] != '\0'
			&& (unsigned char)haystack[i + j] == (unsigned char)needle[j]
			&& len - i - j > 0)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[] = "caballo";
	char str2[] = "ll";
	char *result = ft_strnstr(str1, str2, 5);
	char *result2 = strnstr(str1, str2, 5);
	printf("%s\n", result);
	printf("%s\n", result2);
	return (0);
}
*/