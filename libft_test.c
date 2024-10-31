/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:23:27 by guphilip          #+#    #+#             */
/*   Updated: 2024/10/30 10:09:36 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

void reset(void)
{
	printf("\033[0m");
}

void print_color(char *s, int color)
{
	switch (color)
	{
	case 1:
		printf("\033[1;32m"); // green
		break;
	case 2:
		printf("\x1b[1;31m"); // red
		break;
	case 3:
		printf("\033[1;36m"); // blue
		break;
	case 4:
		printf("\033[1;35m");
		break;
	default:
		reset();
		break;
	}
	printf("%s", s);
	reset();
}

int	main(void)
{
	char	*line = "-------------------------------------------------";
	printf("%s\n", line);
	print_color("IS_ALPHA\n", 3);
	printf("%s\n\n", line);
	char	is_alpha = 'a';
	printf("%d    <-- LIBFT\n", ft_isalpha(is_alpha));
	printf("%d <-- STANDARD\n\n", isalpha(is_alpha));
	((bool)(ft_isalpha(is_alpha)) == (bool)(isalpha(is_alpha))) ? print_color("<-----------------IS_ALPHA OK !----------------->", 1) : print_color("<-----------------IS_ALPHA KO !----------------->", 2);
	printf("\n\n%s\n", line);

	print_color("IS_DIGIT\n", 3);
	printf("%s\n\n", line);
	char	is_digit = '5';
	printf("%d    <-- LIBFT\n", ft_isdigit(is_digit));
	printf("%d <-- STANDARD\n\n", isdigit(is_digit));
	((bool)(ft_isdigit(is_digit)) == (bool)(isdigit(is_digit))) ? print_color("<-----------------IS_DIGIT OK !----------------->", 1) : print_color("<-----------------IS_DIGIT KO !----------------->", 2);
	printf("\n\n%s\n", line);

	print_color("IS_ALNUM\n", 3);
	printf("%s\n\n", line);
	char	is_alnum = '5';
	printf("%d    <-- LIBFT\n", ft_isalnum(is_alnum));
	printf("%d    <-- STANDARD\n\n", isalnum(is_alnum));
	((bool)(ft_isalnum(is_alnum)) == (bool)(isalnum(is_alnum))) ? print_color("<-----------------IS_ALNUM OK !----------------->", 1) : print_color("<-----------------IS_ALNUM KO !----------------->", 2);
	printf("\n\n%s\n", line);

	print_color("IS_ASCII\n", 3);
	printf("%s\n\n", line);
	int		is_ascii = 125;
	printf("%d    <-- LIBFT\n", ft_isascii(is_ascii));
	printf("%d    <-- STANDARD\n\n", isascii(is_ascii));
	((bool)(ft_isascii(is_ascii)) == (bool)(isascii(is_ascii))) ? print_color("<-----------------IS_ASCII OK !----------------->", 1) : print_color("<-----------------IS_ASCII KO !----------------->", 2);
	printf("\n\n%s\n", line);

	print_color("IS_PRINT\n", 3);
	printf("%s\n\n", line);
	int		is_print = 35;
	printf("%d        <-- LIBFT\n", ft_isprint(is_print));
	printf("%d    <-- STANDARD\n\n", isprint(is_print));
	((bool)(ft_isprint(is_print)) == (bool)(isprint(is_print))) ? print_color("<-----------------IS_PRINT OK !----------------->", 1) : print_color("<-----------------IS_PRINT KO !----------------->", 2);
	printf("\n\n%s\n", line);

	print_color("STR_LEN\n", 3);
	printf("%s\n\n", line);
	char	stlen[] = "Bonjour";
	printf("%ld    <-- LIBFT\n", ft_strlen(stlen));
	printf("%ld    <-- STANDARD\n\n", strlen(stlen));
	((bool)(ft_strlen(stlen)) == (bool)(strlen(stlen))) ? print_color("<------------------STRLEN OK !------------------>", 1) : print_color("<------------------STRLEN KO !------------------>", 2);
	printf("\n\n%s\n", line);

	print_color("MEMSET\n", 3);
	printf("%s\n\n", line);
	char	set[] = "Hello World";
	ft_memset(set, 'A', 5);
	printf("%s <-- LIBFT\n", set);
	memset(set, 'A', 5);
	printf("%s <-- STANDARD\n\n", set);
	strcmp(memset(set, 'A', 5), ft_memset(set, 'A', 5)) ? print_color("<-----------------MEMSET IS KO !---------------->", 2) : print_color("<-----------------MEMSET IS OK !---------------->", 1);
	printf("\n\n%s\n", line);

	print_color("BZERO\n", 3);
	printf("%s\n\n", line);
	char	zero[] = "Hello World";
	char	uno[] = "Hello World";
	ft_bzero(zero, 5);
	printf("%s\n", zero + 5);
	bzero(uno, 5);
	printf("%s\n\n", uno + 5);
	strcmp(zero + 5, uno + 5) ? print_color("<-----------------BZERO IS KO !----------------->", 2) : print_color("<-----------------BZERO IS OK !----------------->", 1);
	printf("\n\n%s\n", line);

	print_color("MEMCPY\n", 3);
	printf("%s\n\n", line);
	char	one[] = "Hello World";
	char	two[] = "Ollhe Dlrow";
	char	three[] = "Hello World";
	char	four[] = "Ollhe Dlrow";
	ft_memcpy(one, two, 4);
	printf("%s <-- LIBFT\n", two);
	memcpy(three, four, 4);
	printf("%s <-- STANDARD\n\n", four);
	strcmp(two, four) ? print_color("<-----------------MEMCPY IS KO !----------------->", 2) : print_color("<-----------------MEMSET IS OK !----------------->", 1);
	printf("\n\n%s\n", line);

	print_color("MEMMOVE\n", 3);
	printf("%s\n\n", line);
	char	five[] = "Hello World";
	char	six[] = "Olleh Dlrow";
	char	seven[] = "Hello World";
	char	eight[] = "Olleh Dlrow";
	ft_memmove(five, six, 12);
	printf("%s <-- LIBFT\n", five);
	memmove(seven, eight, 12);
	printf("%s <-- STANDARD\n\n", seven);
	strcmp(five, seven) ? print_color("<-----------------MEMMOVE IS KO !---------------->", 2) : print_color("<-----------------MEMMOVE IS OK !---------------->", 1);
	printf("\n\n%s\n", line);

	print_color("STRLCPY\n", 3);
	printf("%s\n\n", line);
	char	src[] = "Bonjour";
	char	desti1[5];
	char	desti2[5];
	ft_strlcpy(desti1, src, sizeof(desti1));
	printf("%s <-- LIBFT\n", desti1);
	strlcpy(desti2, src, sizeof(desti2));
	printf("%s <-- STANDARD\n\n", desti2);
	strcmp(desti1, desti2) ? print_color("<-----------------STRLCPY IS KO !---------------->", 2) : print_color("<-----------------STRLCPY IS OK !---------------->", 1);
	printf("\n\n%s\n", line);

	print_color("STRLCAT\n", 3);
	printf("%s\n\n", line);
	char	src1[] = "Bonjour";
	char	dest1[] = "Au Revoir";
	printf("%ld   <-- LIBFT\n", ft_strlcat(dest1, src1, 16));
	printf("%ld   <-- STANDARD\n\n", strlcat(dest1, src1, 16));
	if (ft_strlcat(dest1, src1, 16) != strlcat(dest1, src1, 16))
		print_color("<-----------------STRLCAT IS KO !---------------->\n", 2);
	else
		print_color("<-----------------STRLCAT IS OK !---------------->\n", 1);
	printf("\n%s\n", line);

	print_color("TO_UPPER\n", 3);
	printf("%s\n\n", line);
	char	to_upper = 'b';
	to_upper = ft_toupper(to_upper);
	printf("%c <-- LIBFT\n", ft_toupper(to_upper));
	to_upper = toupper(to_upper);
	printf("%c <-- STANDARD\n\n", toupper(to_upper));
	if (ft_toupper(to_upper) != toupper(to_upper))
		print_color("<-----------------TO_UPPER IS KO !---------------->", 2);
	else
		print_color("<-----------------TO_UPPER IS OK !---------------->", 1);
	printf("\n\n%s\n", line);

	print_color("IS_LOWER\n", 3);
	printf("%s\n\n", line);
	char	to_lower = 'b';
	to_lower = ft_tolower(to_lower);
	printf("%c <-- LIBFT\n", ft_tolower(to_lower));
	to_lower = tolower(to_lower);
	printf("%c <-- STANDARD\n\n", tolower(to_lower));
	if (ft_tolower(to_lower) != tolower(to_lower))
		print_color("<-----------------TO_LOWER IS KO !---------------->", 2);
	else
		print_color("<-----------------TO_LOWER IS OK !---------------->", 1);
	printf("\n\n%s\n", line);

	print_color("STRCHR\n", 3);
	printf("%s\n\n", line);
	char	ch_strchr[] = "Bonjour";
	printf("%s <-- LIBFT\n", ft_strchr(ch_strchr, 'n'));
	printf("%s <-- STANDARD\n\n", strchr(ch_strchr, 'n'));
	strcmp(ft_strchr(ch_strchr, 'n'), strchr(ch_strchr, 'n')) ? print_color("<-----------------STRCHR IS KO !----------------->", 2) : print_color("<-----------------STRCHR IS OK !----------------->", 1);
	printf("\n\n%s\n", line);

	print_color("STRRCHR\n", 3);
	printf("%s\n", line);
	char	ch_strrchr[] = "Bonjour";
	printf("%s <-- LIBFT\n", ft_strrchr(ch_strrchr, 'u'));
	printf("%s <-- STANDARD\n\n", strrchr(ch_strrchr, 'u'));
	strcmp(ft_strrchr(ch_strrchr, 'u'), strrchr(ch_strrchr, 'u')) ? print_color("<-----------------STRRCHR IS KO !---------------->", 2) : print_color("<-----------------STRRCHR IS KO !---------------->", 1);
	printf("\n\n%s\n", line);

	print_color("STRNCMP\n", 3);
	printf("%s\n\n", line);
	char ch_strncmp1[] = "Bonjou";
	char ch_strncmp2[] = "Bonjour";
	printf("%d <-- LIBFT\n", ft_strncmp(ch_strncmp1, ch_strncmp2, 7));
	printf("%d <-- STANDARD\n\n", strncmp(ch_strncmp1, ch_strncmp2, 7));
	if (ft_strncmp(ch_strncmp1, ch_strncmp2, 7) != strncmp(ch_strncmp1, ch_strncmp2, 7))
		print_color("<-----------------STRNCMP IS KO !---------------->", 2);
	else
		print_color("<-----------------STRNCMP IS OK !---------------->", 1);
	printf("\n\n%s\n", line);

	print_color("MEMCHR\n", 3);
	printf("%s\n\n", line);
	char	mem[] = "Bonjour";
	printf("%p <-- LIBFT\n", ft_memchr(mem, 'o', 5));
	printf("%p <-- STANDARD\n\n", memchr(mem, 'o', 5));
	if (ft_memchr(mem, 'o', 5) != memchr(mem, 'o', 5))
		print_color("<-----------------MEMCHR IS KO !----------------->", 2);
	else
		print_color("<-----------------MEMSET IS OK !----------------->", 1);
	printf("\n\n%s\n", line);

	print_color("MEMCMP\n", 3);
	printf("%s\n\n", line);
	char	mem1[] = "Bonjourr";
	char	mem2[] = "Bonjour";
	printf("%d <-- LIBFT\n", ft_memcmp(mem1, mem2, 8));
	printf("%d <-- STANDARD\n\n", memcmp(mem1, mem2, 8));
	if (ft_memcmp(mem1, mem2, 8) != memcmp(mem1, mem2, 8))
		print_color("<-----------------MEMCMP IS KO !----------------->", 2);
	else
		print_color("<-----------------MEMSET IS OK !----------------->", 1);
	printf("\n\n%s\n", line);

	print_color("STRNSTR\n", 3);
	printf("%s\n\n", line);
	char	ch_strnstr1[] = "Foo Bar Baz";
	char	ch_strnstr2[] = "Bar";
	printf("Texte : %s <-- LIBFT\n", ft_strnstr(ch_strnstr1, ch_strnstr2, 7));
	printf("Texte : %s <-- STANDARD\n\n", strnstr(ch_strnstr1, ch_strnstr2, 7));
	if (strnstr(ch_strnstr1, ch_strnstr2, 7) != ft_strnstr(ch_strnstr1, ch_strnstr2, 7))
		print_color("<-----------------STRNSTR IS KO !---------------->", 2);
	else
		print_color("<-----------------STRNSTR IS OK !---------------->", 1);
	printf("\n\n%s\n", line);

	print_color("ATOI\n", 3);
	printf("%s\n\n", line);
	char	ch_atoi[] = "-2147483648";
	printf("%d <-- LIBFT\n", ft_atoi(ch_atoi));
	printf("%d <-- STANDARD\n\n", atoi(ch_atoi));
	if (ft_atoi(ch_atoi) != atoi(ch_atoi))
		print_color("<-----------------ATOI IS KO !----------------->", 2);
	else
		print_color("<-----------------ATOI IS OK !----------------->", 1);
	printf("\n\n%s\n", line);

	print_color("CALLOC\n", 3);
	printf("%s\n\n", line);
	int		*cal1;
	int		*cal2;
	cal1 = calloc(10, sizeof(int));
	cal2 = ft_calloc(10, sizeof(int));
	printf("%d <-- LIBFT\n", cal2[9]);
	printf("%d <-- STANDARD\n\n", cal1[9]);
	if (cal1[0] == cal2[0])
		print_color("<-----------------CALLOC IS OK !---------------->", 1);
	else
		print_color("<-----------------CALLOC IS KO !---------------->", 2);
	free(cal1);
	free(cal2);
	printf("\n\n%s\n", line);

	print_color("STRDUP\n", 3);
	printf("%s\n", line);
	char	dup[] = "Coucou";
	char	*result1 = ft_strdup(dup);
	char	*result2 = strdup(dup);
	printf("%s <-- LIBFT\n", result1);
	printf("%s <-- STANDARD\n\n", result2);
	strcmp(result1, result2) ? print_color("<----------------STRDUP IS KO !----------------->", 2) : print_color("<----------------STRDUP IS OK !----------------->", 1);
	printf("\n\n%s\n", line);

	print_color("SUBSTR\n", 3);
	printf("%s\n", line);
	char	*sub = "Bonjour";
	printf("Chaine de base = 'Bonjour'\n");
	printf("Execution de la fonction --> Start = 1 | Len = 4\n");
	printf("RESULTAT = %s\n", ft_substr(sub, 1, 4));
	printf("%s\n", line);

	print_color("STRJOIN\n", 3);
	printf("%s\n", line);
	char	s1[] = "Bonjour+";
	char	s2[] = "Au revoir";
	printf("Chaine 1 = 'Bonjour+' | Chaine 2 'Au Revoir'\n");
	printf("RESULTAT = %s\n", ft_strjoin(s1, s2));
	printf("%s\n", line);

	print_color("STRTRIM\n", 3);
	printf("%s\n", line);
	char	string[] = "++bonjour++";
	char	*c = "+";
	printf("Chaine de base = '++bonjour++'\n");
	printf("Separateur = '+\n");
	printf("RESULTAT = %s\n", ft_strtrim(string, c));
}
