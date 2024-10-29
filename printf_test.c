/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:08:38 by jcheron           #+#    #+#             */
/*   Updated: 2024/10/29 18:26:16 by jcheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include "libft.h"

void	print_color(char *s, int color)
{
	switch (color)
	{
	case 1:
		printf("\033[1;32m%s\033[0m\n", s);
		break;
	case 2:
		printf("\033[1;31m%s\033[0m\n", s);
		break;
	case 3:
		printf("\033[0;35m%s\033[0m\n", s);
		break;
	default:
		break;
	}
}

void my_pf_return(int ret)
{
	printf(" --- ft_printf return : %d\n", ret);

}

void pf_return(int ret)
{
	printf(" --- printf return : %d\n", ret);

}

void ft_printline(void)
{
	printf("\n-------------------------------------------------\n\n");
}

void run_single_test(char flag, char *res)
{
	int		my_return;
	int		printf_return;
	int nb = 0;
	ft_printline();
	switch (flag)
	{
		case 'c':
			my_return = ft_printf("%c", res[0]);
			my_pf_return(my_return);
			printf_return = printf("%c", res[0]);
			pf_return(printf_return);
			break;
		case 's':
			my_return = ft_printf("%s", res);
			my_pf_return(my_return);
			printf_return = printf("%s", res);
			pf_return(printf_return);
			break;
		case 'd':
			nb = ft_atoi(res);
			my_return = ft_printf("%d", nb);
			my_pf_return(my_return);
			printf_return = printf("%d", nb);
			pf_return(printf_return);
			break;
		case '%':
			my_return = ft_printf("%c", res[0]);
			my_pf_return(my_return);
			printf_return = printf("%c", res[0]);
			pf_return(printf_return);
			break;
		case 'x':
			my_return = ft_printf("%x", ft_atoi(res));
			my_pf_return(my_return);
			printf_return = printf("%x", ft_atoi(res));
			pf_return(printf_return);
			break;
		case 'X':
			my_return = ft_printf("%X", ft_atoi(res));
			my_pf_return(my_return);
			printf_return = printf("%X", ft_atoi(res));
			pf_return(printf_return);
			break;
		case 'u':
			my_return = ft_printf("%u", ft_atoi(res));
			my_pf_return(my_return);
			printf_return = printf("%u", ft_atoi(res));
			pf_return(printf_return);
			break;


	}
	my_return == printf_return ? print_color("DIFF OK", 1) : print_color("DIFF KO", 2);

}


void	run_test(void)
{
	int *ptr = 0 ;
	ft_printline();
	print_color("ft_printf tester", 3);
	ft_printline();

	// print_color("\nTest without any flag :\n", 3);
	// my_return = ft_printf("Aled !");
	// printf(" --- My printf return : %d\n", my_return);
	// printf_return = printf("Aled !");
	// printf(" --- Printf return    : %d \n", printf_return);
	// my_return == printf_return ? print_color("DIFF OK", 1) : print_color("DIFF KO", 2);

	// printf("%s", line);
	// print_color("\nTest for c flag :\n", 3);
	// my_return = ft_printf("%c", 'W');
	// printf(" --- My printf return : %d\n", my_return);
	// printf_return = printf("%c", 'W');
	// printf(" --- Printf return    : %d \n", printf_return);
	// my_return == printf_return ? print_color("DIFF OK", 1) : print_color("DIFF KO", 2);
	// printf("%s", line);

	print_color("Tests for c flag :", 3);

	run_single_test('c', "W");
	run_single_test('c', "T");

	ft_printline();

	print_color("Tests for s flag :", 3);

	run_single_test('s', "Hello, World!");
	run_single_test('s', "Le gras, c'est la vie !");

	ft_printline();

	print_color("Tests for d flag :", 3);

	run_single_test('d', "42");
	run_single_test('d', "-42");

	ft_printline();

	print_color("Tests for % flag :", 3);

	run_single_test('%', "%");

	ft_printline();

	print_color("Tests for x flag :", 3);

	run_single_test('x', "-1");
	run_single_test('x', "42");

	ft_printline();

	print_color("Tests for X flag :", 3);

	run_single_test('X', "-1");
	run_single_test('X', "42");

	ft_printline();

	print_color("Tests for u flag :", 3);

	run_single_test('u', "-1");
	run_single_test('u', "42");

	ft_printline();

	print_color("Tests for p flag :", 3);

	ft_printline();

	int my_return, printf_return;
	int test = 42;
	int *ptr2 = &test;

	my_return = ft_printf("%p", ptr);
	my_pf_return(my_return);
	printf_return = printf("%p", ptr);
	pf_return(printf_return);
	my_return == printf_return ? print_color("DIFF OK", 1) : print_color("DIFF KO", 2);

	ft_printline();

	my_return = ft_printf("%p", ptr2);
	my_pf_return(my_return);
	printf_return = printf("%p", ptr2);
	pf_return(printf_return);
	my_return == printf_return ? print_color("DIFF OK", 1) : print_color("DIFF KO", 2);

	ft_printline();
}

int	main(void)
{
	run_test();
	return (0);
}
