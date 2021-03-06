/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:33:48 by wto               #+#    #+#             */
/*   Updated: 2018/02/19 16:33:50 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int ft_result;
	int result;
	int success;
	int test_num = 1;
	char *failure = "failed for printable chars";

	for (char c = 32; c < 48; c++)
	{
		ft_result = ft_isprint(c);
		result = isprint(c);
		success = result == ft_result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, c, result, ft_result, failure);
			return (0);
		}
	}
	for (char c = 58; c < 65; c++)
	{
		ft_result = ft_isprint(c);
		result = isprint(c);
		success = result == ft_result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, c, result, ft_result, failure);
			return (0);
		}
	}
	for (char c = 91; c < 97; c++)
	{
		ft_result = ft_isprint(c);
		result = isprint(c);
		success = result == ft_result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, c, result, ft_result, failure);
			return (0);
		}
	}
	for (char c = 123; c < 127; c++)
	{
		ft_result = ft_isprint(c);
		result = isprint(c);
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
	char *failure = "failed for nonprintable chars";

	for (char c = 0; c < 32; c++)
	{
		ft_result = ft_isprint(c);
		result = isprint(c);
		success = result == ft_result;
		if (!success)
		{
			printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, c, result, ft_result, failure);
			return (0);
		}
	}
	ft_result = ft_isprint(127);
	result = isprint(127);
	success = result == ft_result;
	if (!success)
	{
		printf("\tTest %02d: FAILURE | Input: %c | Expected: %c | Got: %c\n | %s\n", test_num, 127, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_isprint_tests(void)
{
	return (2);
}

int  isprint_tests(void)
{
	printf("==============================\nTesting ft_isprint\n==============================\n");
	return (test1() + test2());
}