#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
    printf("%s\n", "Ft_isalpha result ('a'):");
    printf("%d\n", ft_isalpha('a'));

    printf("%s\n", "Ft_isdigit result ('6'):");
    printf("%d\n", ft_isdigit('6'));

    printf("%s\n", "Ft_isalnum result ('a'):");    
    printf("%d\n", ft_isalnum('a'));

    printf("%s\n", "Ft_isascii result (128):");
    printf("%d\n", ft_isascii(128));

    printf("%s\n", "Ft_isprint result ('\t'):");
    printf("%d\n", ft_isprint('\t'));

    printf("%s\n", "Ft_toupper result ('a'):");
    printf("%c\n", ft_toupper('a')); 
*/
    printf("%s\n", "Ft_tolower result ('A'):");
    printf("%c\n", ft_tolower('A')); 
/*
    printf("%s\n", "Ft_strchr result ('Hello', 'l'):");
    printf("%s\n", ft_strchr("Hello", 'l'));

    printf("%s\n", "Ft_strrchr result ('Hello', 'l'):");
    printf("%s\n", ft_strrchr("Hello", 'l'));

    printf("%s\n", "Ft_strlen result ('Hello'):");
    printf("%lu\n", ft_strlen("Hello"));

    printf("%s\n", "Ft_strncmp result ('Hello', 'Hello', 5):");
    printf("%d\n", ft_strncmp("Hello", "Hello", 5));

    printf("%s\n", "Ft_memset result ('Hello', 'l', 3):");
    printf("%s\n", ft_memset("Hello", 'l', 3)); 

    char buffer[20];
    ft_memset(buffer, 65, 5);
    for ( int i = 0; i < 11; i++) {
        printf("%c ", buffer[i]);
    }
    printf("\n");

	char buffer[10] = "123456789";
	char buffer2[10] = "123456789";

	ft_bzero(buffer, 10);
    printf("%s\n", "Ft_bzero result:");
	for ( int i = 0; i < 5; i++) {
        printf("%c ", buffer[i]);
    }
	printf("\n");
	bzero(buffer2, 10);
    printf("%s\n", "Bzero result:");
	for ( int i = 0; i < 5; i++) {
        printf("%c ", buffer2[i]);
    }
	printf("\n");

    printf("%s\n", "Ft_memchr result:");
    printf("%s\n", ft_memchr("Hello", 'l', 5));

    printf("%s\n", "Ft_memcmp result:");
    printf("%d\n", ft_memcmp("Hello", "Hello", 5));

    printf("%s\n", "Ft_memcpy result:");
    printf("%s\n", ft_memcpy(buffer, "Hello", 5));  

    printf("%s\n", "Ft_memmove result:");   
    printf("%s\n", ft_memmove(buffer, "Hello", 5));

    printf("%s\n", "Ft_strnstr result:");   
    printf("%s\n", ft_strnstr("Hello", "l", 5));

    char src[] = "hello 42";
	char dst[] = "hello 42";
	size_t dstsize = 5;

	printf("%s\n", "Ft_strlcpy result:");
	printf("%lu\n", ft_strlcpy(dst, src, dstsize));

    printf("%s\n", "Strlcpy result:");
	printf("%lu\n", strlcpy(dst, src, dstsize));

    printf("%s\n", "Ft_strlcat result:");
    printf("%lu\n", ft_strlcat(dst, src, dstsize));
    printf("%s\n", "Strlcat result:");
    printf("%lu\n", strlcat(dst, src, dstsize));    

	char str[] = "  873736585596757576996";
    printf("%s\n", "Ft_atoi result:");
	printf("%d\n", ft_atoi(str));
    printf("%s\n", "Atoi result:");
	printf("%d\n", atoi(str));

    int i = 0;
	int count = 5;
	int size = 10;
	int	*A = (int *)ft_calloc(count, size);

	if (A == NULL)
		return (1);
    printf("%s\n", "Ft_calloc result:");    
	while (i < count)
	{
		printf("%d ", A[i]);
		i++;
	}
	free (A);
    printf("\n");
*/

	return (0);
}