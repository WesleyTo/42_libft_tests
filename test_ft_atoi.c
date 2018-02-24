/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 22:45:03 by wto               #+#    #+#             */
/*   Updated: 2018/02/22 22:45:05 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *input = "2345718";
	int result;
	int ft_result;
	char *failure = "failed for regular positive number";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *input = "-1985234";
	int result;
	int ft_result;
	char *failure = "failed for regular negative number";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	char *input = "0001985234";
	int result;
	int ft_result;
	char *failure = "failed for leading zeroes";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *input = "ABC134523";
	int result;
	int ft_result;
	char *failure = "failed for leading alphas in number";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test5()
{
	int test_num = 5;
	char *input = "2385ABC";
	int result;
	int ft_result;
	char *failure = "failed for trailing alphas in number";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test6()
{
	int test_num = 6;
	char *input = "ABC345897ABC";
	int result;
	int ft_result;
	char *failure = "failed for leading and trailing alphas in number";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test7()
{
	int test_num = 7;
	char *input = "345ABC897";
	int result;
	int ft_result;
	char *failure = "failed for alphas in middle of number";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test8()
{
	int test_num = 8;
	char *input = " \t\n\v\r\f134523";
	int result;
	int ft_result;
	char *failure = "failed for leading whitespace in number";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test9()
{
	int test_num = 9;
	char *input = "134523 \t\n\v\r\f";
	int result;
	int ft_result;
	char *failure = "failed for trailing whitespace in number";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test10()
{
	int test_num = 10;
	char *input = " \t\n\v\r\f134523 \t\n\v\r\f";
	int result;
	int ft_result;
	char *failure = "failed for leading whitespace in number";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test11()
{
	int test_num = 11;
	char *input = "134 \t\n\v\r\f134523";
	int result;
	int ft_result;
	char *failure = "failed for whitespace in middle of number";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test12()
{
	int test_num = 12;
	char *input = "+45";
	int result;
	int ft_result;
	char *failure = "failed for leading positive sign";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test13()
{
	int test_num = 13;
	char *input = "2147483647";
	int result;
	int ft_result;
	char *failure = "failed for maximum integer";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test14()
{
	int test_num = 14;
	char *input = "-2147483648";
	int result;
	int ft_result;
	char *failure = "failed for minimum integer";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test15()
{
	int test_num = 15;
	char *input = "2147483648";
	int result;
	int ft_result;
	char *failure = "failed for larger than maximum integer";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test16()
{
	int test_num = 16;
	char *input = "-2147483649";
	int result;
	int ft_result;
	char *failure = "failed for smaller than minimum integer";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test17()
{
	int test_num = 17;
	char *input = "ABC-21474 83649 \tDEF";
	int result;
	int ft_result;
	char *failure = "failed for mixed input";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test18()
{
	int test_num = 18;
	char *input = "!@#$ABC-21474 83649 \tDEF";
	int result;
	int ft_result;
	char *failure = "failed for mixed input";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test19()
{
	int test_num = 19;
	char *input = "+++!@#$ABC-21474 83649 \tDEF";
	int result;
	int ft_result;
	char *failure = "failed for REALLY mixed input";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test20()
{
	int test_num = 20;
	char *input = "-+-!@#$ABC-23745673458925690872340986714354 83649 \tDEF";
	int result;
	int ft_result;
	char *failure = "failed for REALLY mixed and awful input";

	result = atoi(input);
	ft_result = ft_atoi(input);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_atoi_tests(void)
{
	return (20);
}

int atoi_tests(void)
{
	printf("==============================\nTesting ft_atoi\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5() + test6() + test7() + test8() + test9() + test10()
		+ test11() + test12() + test13() + test14() + test15() + test16() + test17() + test18() + test19() +test20());
}