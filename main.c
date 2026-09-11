#include"libft.h"
#include <stdio.h>

int	main(void)
{

	printf("isalpha('A') = %d (attendu 1)\n", ft_isalpha('A'));
	printf("isalpha('5') = %d (attendu 0)\n", ft_isalpha('5'));
	printf("isdigit('7') = %d (attendu 1)\n", ft_isdigit('7'));
	printf("isalnum('z') = %d (attendu 1)\n", ft_isalnum('z'));
	printf("isascii(127) = %d (attendu 1)\n", ft_isascii(127));
	printf("isprint(' ') = %d (attendu 1)\n", ft_isprint(' '));
	printf("isprint('\\n')= %d (attendu 0)\n", ft_isprint('\n'));
	char buf[6] = "AAAAA";
	ft_memset(buf, 'B', 3);
	printf("memset: %s (attendu BBBAA)\n", buf);
	char buff[5] = "AAAA";
	ft_bzero(buff, 2);
	printf("bzero: %d %d %c %c (attendu 0 0 A A)\n", buff[0], buff[1], buff[2], buff[3]);
	printf("toupper('a')=%c tolower('B')=%c (attendu A b)\n", ft_toupper('a'), ft_tolower('B'));
	return (0);
}
