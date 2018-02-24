/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 13:30:34 by wto               #+#    #+#             */
/*   Updated: 2018/02/19 14:08:29 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int ft_result;
	int result;
	int success;
	int test_num = 1;
	char *failure = "failed for large negative numbers";

	for (int i = 0x80000000; i < -9; i += 10000000)
	{
		ft_result = ft_isdigit(i);
		result = isdigit(i);
		success = ft_result == result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %c | Got: %c\n | %s\n", test_num, i, result, ft_result, failure);
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
	char *failure = "failed for single digit numbers";

	for (int i = -9; i < 10; i++)
	{
		ft_result = ft_isdigit(i);
		result = isdigit(i);
		success = ft_result == result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %c | Got: %c\n | %s\n", test_num, i, result, ft_result, failure);
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
	char *failure = "failed for large positive numbers";

	for (int i = 0x7FFFFFFF; i >= 10; i -= 10000000)
	{
		ft_result = ft_isdigit(i);
		result = isdigit(i);
		success = ft_result == result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %c | Got: %c\n | %s\n", test_num, i, result, ft_result, failure);
			return (0);
		}
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_isdigit_tests(void)
{
	return (3);
}

int  isdigit_tests(void)
{
	printf("==============================\nTesting ft_isdigit\n==============================\n");
	return (test1() + test2() + test3());
}