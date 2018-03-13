/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 17:39:19 by wto               #+#    #+#             */
/*   Updated: 2018/03/12 17:41:54 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	int input = 2345718;
	char *result = "2345718";
	char *ft_result;
	char *failure = "failed for regular positive number";

	ft_result = ft_itoa(input);
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
	char *result = "-1985234";
	char *ft_result;
	char *failure = "failed for regular negative number";

	ft_result = ft_itoa(input);
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
	char *result = "2147483647";
	char *ft_result;
	char *failure = "failed for maximum integer";

	ft_result = ft_itoa(input);
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
	char *result = "-2147483648";
	char *ft_result;
	char *failure = "failed for minimum integer";

	ft_result = ft_itoa(input);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_itoa_tests(void)
{
	return (4);
}

int itoa_tests(void)
{
	printf("==============================\nTesting ft_itoa\n==============================\n");
	return (test1() + test2() + test3() + test4());
}