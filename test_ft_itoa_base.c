/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa_base_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 14:47:10 by wto               #+#    #+#             */
/*   Updated: 2018/03/17 14:47:10 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	int input = 2345718;
	int base = 10;
	char *result = "2345718";
	char *ft_result;
	char *failure = "failed for regular positive number";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	int input = -1985234;
	int base = 10;
	char *result = "-1985234";
	char *ft_result;
	char *failure = "failed for regular negative number";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	int input = 2147483647;
	int base = 10;
	char *result = "2147483647";
	char *ft_result;
	char *failure = "failed for maximum integer";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	int input = -2147483648;
	int base = 10;
	char *result = "-2147483648";
	char *ft_result;
	char *failure = "failed for minimum integer";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test5()
{
	int test_num = 5;
	int input = 2345718;
	int base = 16;
	char *result = "23CAF6";
	char *ft_result;
	char *failure = "failed for regular positive number base 16";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test6()
{
	int test_num = 6;
	int input = -1985234;
	int base = 16;
	char *result = "FFE1B52E";
	char *ft_result;
	char *failure = "failed for regular negative number base 16";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test7()
{
	int test_num = 7;
	int input = 2147483647;
	int base = 16;
	char *result = "7FFFFFFF";
	char *ft_result;
	char *failure = "failed for maximum integer base 16";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test8()
{
	int test_num = 8;
	int input = -2147483648;
	int base = 16;
	char *result = "80000000";
	char *ft_result;
	char *failure = "failed for minimum integer base 16";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test9()
{
	int test_num = 9;
	int input = 2345718;
	int base = 2;
	char *result = "1000111100101011110110";
	char *ft_result;
	char *failure = "failed for regular positive number base 2";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test10()
{
	int test_num = 10;
	int input = -1985234;
	int base = 2;
	char *result = "11111111111000011011010100101110";
	char *ft_result;
	char *failure = "failed for regular negative number base 2";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test11()
{
	int test_num = 11;
	int input = 2147483647;
	int base = 2;
	char *result = "1111111111111111111111111111111";
	char *ft_result;
	char *failure = "failed for maximum integer base 2";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test12()
{
	int test_num = 12;
	int input = -2147483648;
	int base = 2;
	char *result = "10000000000000000000000000000000";
	char *ft_result;
	char *failure = "failed for minimum integer base 2";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test13()
{
	int test_num = 13;
	int input = -22314811;
	int base = 8;
	char *result = "125077473";
	char *ft_result;
	char *failure = "failed for sanity check";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_itoa_base_tests(void)
{
	return (13);
}

int itoa_base_tests(void)
{
	printf("==============================\nTesting ft_itoa_base\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5() + test6() 
		+ test7() + test8() + test9() + test10() + test11() + test12()
		+ test13());
}