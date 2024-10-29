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

int run_single_test(char flag, char *res)
{
	int my_return, printf_return, nb = 0;
	int diff_ko = 0;

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
	if (my_return == printf_return)
	{
		print_color("DIFF OK", 1);
	}
	else
	{
		print_color("DIFF KO", 2);
		diff_ko = 1;
	}
	return diff_ko;
}

void run_test(int *diff_ko_count)
{
	int result;
	ft_printline();
	print_color("ft_printf tester", 3);
	ft_printline();

	print_color("Tests for c flag :", 3);
	result = run_single_test('c', "W");
	*diff_ko_count += result;
	result = run_single_test('c', "T");
	*diff_ko_count += result;

	ft_printline();

	print_color("Tests for s flag :", 3);
	result = run_single_test('s', "Hello, World!");
	*diff_ko_count += result;
	result = run_single_test('s', "Le gras, c'est la vie !");
	*diff_ko_count += result;

	ft_printline();

	print_color("Tests for d flag :", 3);
	result = run_single_test('d', "42");
	*diff_ko_count += result;
	result = run_single_test('d', "-42");
	*diff_ko_count += result;

	ft_printline();

	print_color("Tests for % flag :", 3);
	result = run_single_test('%', "%");
	*diff_ko_count += result;

	ft_printline();

	print_color("Tests for x flag :", 3);
	result = run_single_test('x', "-1");
	*diff_ko_count += result;
	result = run_single_test('x', "42");
	*diff_ko_count += result;

	ft_printline();

	print_color("Tests for X flag :", 3);
	result = run_single_test('X', "-1");
	*diff_ko_count += result;
	result = run_single_test('X', "42");
	*diff_ko_count += result;

	ft_printline();

	print_color("Tests for u flag :", 3);
	result = run_single_test('u', "-1");
	*diff_ko_count += result;
	result = run_single_test('u', "42");
	*diff_ko_count += result;

	ft_printline();

	print_color("Tests for p flag :", 3);

	int my_return, printf_return;
	int test = 42;
	int *ptr = NULL;
	// int *ptr2 = &test;

	my_return = ft_printf("%p", ptr);
	my_pf_return(my_return);
	printf_return = printf("%p", ptr);
	pf_return(printf_return);
	if (my_return != printf_return)
		(*diff_ko_count)++;

	ft_printline();

	my_return = ft_printf("%p", &test);
	my_pf_return(my_return);
	printf_return = printf("%p", &test);
	pf_return(printf_return);
	if (my_return != printf_return)
		(*diff_ko_count)++;

	ft_printline();
}

int main(void)
{
	int diff_ko_count = 0;

	run_test(&diff_ko_count);

	if (diff_ko_count == 0)
		print_color("All tests passed successfully!", 1);
	else
	{
		char message[100];
		snprintf(message, sizeof(message), "Tests completed with %d DIFF KO(s)", diff_ko_count);
		print_color(message, 2);
	}

	ft_printline();

	return 0;
}
