/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:23:27 by guphilip          #+#    #+#             */
/*   Updated: 2024/10/29 15:51:23 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char	*line = "-------------------------------------------------";
	printf("%s\n", line);
	printf("\033[0;32mIS_ALPHA\033[0m\n");
	printf("%s\n", line);
	char	is_alpha = 'G';
	printf("%d    <-- LIBFT\n", ft_isalpha(is_alpha));
	printf("%d <-- STANDARD\n\n", isalpha(is_alpha));
	((bool)(ft_isalpha(is_alpha)) == (bool)(isalpha(is_alpha))) ? printf("\033[0;32mIS_ALPHA OK !\033[0m\n") : printf("\033[0;31mIS_ALPHA KO !\033[0;31m");
	printf("\n%s\n", line);

	printf("\033[0;32mIS_DIGIT\033[0m\n");
	printf("%s\n", line);
	char	is_digit = '5';
	printf("%d    <-- LIBFT\n", ft_isdigit(is_digit));
	printf("%d <-- STANDARD\n", isdigit(is_digit));
	printf("%s\n", line);

	printf("\033[0;32mIS_ALNUM\033[0m\n");
	printf("%s\n", line);
	char	is_alnum = '5';
	printf("%d    <-- LIBFT\n", ft_isalnum(is_alnum));
	printf("%d    <-- STANDARD\n", isalnum(is_alnum));
	printf("%s\n", line);

	printf("\033[0;32mIS_ASCII\033[0m\n");
	printf("%s\n", line);
	int		is_ascii = 125;
	printf("%d    <-- LIBFT\n", ft_isascii(is_ascii));
	printf("%d    <-- STANDARD\n", isascii(is_ascii));
	printf("%s\n", line);

	printf("\033[0;32mIS_PRINT\033[0m\n");
	printf("%s\n", line);
	int		is_print = 35;
	printf("%d    <-- LIBFT\n", ft_isprint(is_print));
	printf("%d    <-- STANDARD\n", isprint(is_print));
	printf("%s\n", line);

	printf("\033[0;32mSTR_LEN\033[0m\n");
	printf("%s\n", line);
	char	stlen[] = "Bonjour";
	printf("%ld    <-- LIBFT\n", ft_strlen(stlen));
	printf("%ld    <-- STANDARD\n", strlen(stlen));
	printf("%s\n", line);

	printf("\033[0;32mMEMSET\033[0m\n");
	printf("%s\n", line);
	char	set[] = "Hello World";
	ft_memset(set, 'A', 5);
	printf("%s <-- LIBFT\n", set);
	memset(set, 'A', 5);
	printf("%s <-- STANDARD\n", set);
	printf("%s\n", line);

	printf("\033[0;32mBZERO\033[0m\n");
	printf("%s\n", line);
	char	zero[] = "Hello World";
	int		i = 0;
	int		j = 0;

	ft_bzero(zero, 5);
	while (i < 11)
	{
		write(1, &zero[i], 1);
		i++;
	}
	write(1, "\n", 1);
	bzero(zero, 5);
	while (j < 11)
	{
		write(1, &zero[j], 1);
		j++;
	}
	printf("\n");
	printf("%s\n", line);

	printf("\033[0;32mMEMCPY\033[0m\n");
	printf("%s\n", line);
	char	one[] = "Hello World";
	char	two[] = "Ollhe Dlrow";
	char	three[] = "Hello World";
	char	four[] = "Ollhe Dlrow";
	ft_memcpy(one, two, 4);
	printf("%s <-- LIBFT\n", two);
	memcpy(three, four, 4);
	printf("%s <-- STANDARD\n", four);
	printf("%s\n", line);

	printf("\033[0;32mMEMMOVE\033[0m\n");
	printf("%s\n", line);
	char	five[] = "Hello World";
	char	six[] = "Olleh Dlrow";
	char	seven[] = "Hello World";
	char	eight[] = "Olleh Dlrow";
	ft_memmove(five, six, 12);
	printf("%s <-- LIBFT\n", five);
	memmove(seven, eight, 12);
	printf("%s <-- STANDARD\n", seven);
	printf("%s\n", line);

	printf("\033[0;32mSTRLCPY\033[0m\n");
	printf("%s\n", line);
	char	src[] = "Bonjour";
	char	dest[5];
	ft_strlcpy(dest, src, sizeof(dest));
	printf("%s <-- LIBFT\n", dest);
	strlcpy(dest, src, sizeof(dest));
	printf("%s <-- STANDARD\n", dest);
	printf("%s\n", line);

	printf("\033[0;32mSTRLCAT\033[0m\n");
	printf("%s\n", line);
	char	src1[] = "Bonjour";
	char	dest1[] = "Au Revoir";
	char	src2[] = "Bonjour";
	char	dest2[] = "Au Revoir";
	printf("%ld   <-- LIBFT\n", ft_strlcat(dest1, src1, 16));
	printf("%ld   <-- STANDARD\n", strlcat(dest2, src2, 16));
	printf("%s\n", line);

	printf("\033[0;32mTO_UPPER\033[0m\n");
	printf("%s\n", line);
	char	to_upper = 'b';
	to_upper = ft_toupper(to_upper);
	printf("%c <-- LIBFT\n", ft_toupper(to_upper));
	to_upper = toupper(to_upper);
	printf("%c <-- STANDARD\n", toupper(to_upper));
	printf("%s\n", line);

	printf("\033[0;32mIS_LOWER\033[0m\n");
	printf("%s\n", line);
	char	to_lower = 'b';
	to_lower = ft_tolower(to_lower);
	printf("%c <-- LIBFT\n", ft_tolower(to_lower));
	to_lower = tolower(to_lower);
	printf("%c <-- STANDARD\n", tolower(to_lower));
	printf("%s\n", line);

	printf("\033[0;32mSTRCHR\033[0m\n");
	printf("%s\n", line);
	char	ch_strchr[] = "Bonjour";
	printf("%s <-- LIBFT\n", ft_strchr(ch_strchr, 'n'));
	printf("%s <-- STANDARD\n", strchr(ch_strchr, 'n'));
	printf("%s\n", line);

	printf("\033[0;32mSTRRCHR\033[0m\n");
	printf("%s\n", line);
	char	ch_strrchr[] = "Bonjour";
	printf("%s <-- LIBFT\n", ft_strrchr(ch_strrchr, 'n'));
	printf("%s <-- STANDARD\n", strrchr(ch_strrchr, 'n'));
	printf("%s\n", line);

	printf("\033[0;32mSTRNCMP\033[0m\n");
	printf("%s\n", line);
	char ch_strncmp1[] = "Bonjou";
	char ch_strncmp2[] = "Bonjour";
	printf("%d <-- LIBFT\n", ft_strncmp(ch_strncmp1, ch_strncmp2, 7));
	printf("%d <-- STANDARD\n", strncmp(ch_strncmp1, ch_strncmp2, 7));
	printf("%s\n", line);

	printf("\033[0;32mMEMCHR\033[0m\n");
	printf("%s\n", line);
	char	mem[] = "Bonjour";
	printf("%p <-- LIBFT\n", ft_memchr(mem, 'o', 5));
	printf("%p <-- STANDARD\n", memchr(mem, 'o', 5));
	printf("%s\n", line);

	printf("\033[0;32mMEMCMP\033[0m\n");
	printf("%s\n", line);
	char	mem1[] = "Bonjourr";
	char	mem2[] = "Bonjour";
	printf("%d <-- LIBFT\n", ft_memcmp(mem1, mem2, 8));
	printf("%d <-- STANDARD\n", memcmp(mem1, mem2, 8));
	printf("%s\n", line);

	printf("\033[0;32mSTRNSTR\033[0m\n");
	printf("%s\n", line);
	char	ch_strnstr1[] = "Foo Bar Baz";
	char	ch_strnstr2[] = "Bar";
	printf("Texte : %s <-- STANDARD\n", strnstr(ch_strnstr1, ch_strnstr2, 7));
	printf("Texte : %s <-- LIBFT\n", ft_strnstr(ch_strnstr1, ch_strnstr2, 7));
	printf("%s\n", line);

	printf("\033[0;32mATOI\033[0m\n");
	printf("%s\n", line);
	char	ch_atoi[] = "-2147483648";
	printf("%d <-- STANDARD\n", atoi(ch_atoi));
	printf("%d <-- LIBFT\n", ft_atoi(ch_atoi));
	printf("%s\n", line);

	printf("\033[0;32mCALLOC\033[0m\n");
	printf("%s\n", line);
	int		*cal1;
	int		*cal2;
	cal1 = calloc(10, sizeof(int));
	cal2 = ft_calloc(10, sizeof(int));
	printf("%d <-- STANDARD\n", cal1[9]);
	printf("%d <-- LIBFT\n", cal2[9]);
	free(cal1);
	free(cal2);
	printf("%s\n", line);

	printf("\033[0;32mSTRDUP\033[0m\n");
	printf("%s\n", line);
	char	dup[] = "Coucou";
	printf("%s <-- STANDARD\n", strdup(dup));
	printf("%s <-- LIBFT\n", ft_strdup(dup));
	printf("%s\n", line);

	printf("\033[0;32mSUBSTR\033[0m\n");
	printf("%s\n", line);
	char	*sub = "Bonjour";
	printf("Chaine de base = 'Bonjour'\n");
	printf("Execution de la fonction --> Start = 1 | Len = 4\n");
	printf("RESULTAT = %s\n", ft_substr(sub, 1, 4));
	printf("%s\n", line);

	printf("\033[0;32mSTRJOIN\033[0m\n");
	printf("%s\n", line);
	char	s1[] = "Bonjour+";
	char	s2[] = "Au revoir";
	printf("Chaine 1 = 'Bonjour+' | Chaine 2 'Au Revoir'\n");
	printf("RESULTAT = %s\n", ft_strjoin(s1, s2));
	printf("%s\n", line);

	printf("\033[0;32mSTRTRIM\033[0m\n");
	printf("%s\n", line);
	char	string[] = "++bonjour++";
	char	*c = "+";
	printf("Chaine de base = '++bonjour++\n");
	printf("Separateur = '+\n");
	printf("RESULTAT = %s\n", ft_strtrim(string, c));
}
