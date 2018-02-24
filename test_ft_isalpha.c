/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 14:53:25 by wto               #+#    #+#             */
/*   Updated: 2018/02/19 14:53:26 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int ft_result;
	int result;
	int success;
	int test_num = 1;
	char *failure = "failed for numbers";

	for (int c = (int)'0'; c < (int)'9'; c++)
	{
		ft_result = ft_isalpha(c);
		result = isalpha(c);
		success = result == ft_result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, c, result, ft_result, failure);
			return (0);
		}
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int ft_result;
	int result;
	int success;
	int test_num = 2;
	char *failure = "failed for lowercase alphas";

	for (int c = (int)'a'; c < (int)'z'; c++)
	{
		ft_result = ft_isalpha(c);
		result = isalpha(c);
		success = result == ft_result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, c, result, ft_result, failure);
			return (0);
		}
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int ft_result;
	int result;
	int success;
	int test_num = 3;
	char *failure = "failed for uppercase alphas";
	
	for (int c = (int)'A'; c < (int)'Z'; c++)
	{
		ft_result = ft_isalpha(c);
		result = isalpha(c);
		success = result == ft_result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, c, result, ft_result, failure);
			return (0);
		}
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int ft_result;
	int result;
	int success;
	int test_num = 4;
	char *failure = "failed for printable chars";

	for (char c = 32; c < 48; c++)
	{
		ft_result = ft_isalpha(c);
		result = isalpha(c);
		success = result == ft_result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, c, result, ft_result, failure);
			return (0);
		}
	}
	for (char c = 58; c < 65; c++)
	{
		ft_result = ft_isalpha(c);
		result = isalpha(c);
		success = result == ft_result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, c, result, ft_result, failure);
			return (0);
		}
	}
	for (char c = 91; c < 97; c++)
	{
		ft_result = ft_isalpha(c);
		result = isalpha(c);
		success = result == ft_result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, c, result, ft_result, failure);
			return (0);
		}
	}
	for (char c = 123; c < 127; c++)
	{
		ft_result = ft_isalpha(c);
		result = isalpha(c);
		success = result == ft_result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, c, result, ft_result, failure);
			return (0);
		}
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test5()
{
	int ft_result;
	int result;
	int success;
	int test_num = 5;
	char *failure = "failed for nonprintable chars";

	for (char c = 0; c < 32; c++)
	{
		ft_result = ft_isalpha(c);
		result = isalpha(c);
		success = result == ft_result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, c, result, ft_result, failure);
			return (0);
		}
	}
	ft_result = ft_isalpha(127);
	result = isalpha(127);
	success = result == ft_result;
	if (!success)
	{
		printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, 127, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_isalpha_tests(void)
{
	return (5);
}

int  isalpha_tests(void)
{
	printf("==============================\nTesting ft_isalpha\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5());
}