/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:11:13 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 16:11:14 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for identical input";
	char *str = "I'm A String!";
	char *sft = "I'm A String!";
	int result;
	int ft_result;

	result = strcmp(str, sft);
	ft_result = ft_strcmp(str, sft);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, str, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *failure = "failed for different inputs";
	char *str = "I'm A String!";
	char *sft = "I'm Different!";
	int result;
	int ft_result;

	result = strcmp(str, sft);
	ft_result = ft_strcmp(str, sft);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, str, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	char *failure = "failed for different inputs of the same length";
	char *str = "I Am A String!";
	char *sft = "I'm Different!";
	int result;
	int ft_result;

	result = strcmp(str, sft);
	ft_result = ft_strcmp(str, sft);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, str, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *failure = "failed for empty strings";
	char *str = "";
	char *sft = "";
	int result;
	int ft_result;

	result = strcmp(str, sft);
	ft_result = ft_strcmp(str, sft);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, str, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test5()
{
	int test_num = 5;
	char *failure = "failed for empty string with non-empty string";
	char *str = "";
	char *sft = "Not Empty";
	int result;
	int ft_result;

	result = strcmp(str, sft);
	ft_result = ft_strcmp(str, sft);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, str, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_strcmp_tests(void)
{
	return (5);
}

int strcmp_tests(void)
{
	printf("==============================\nTesting ft_strcmp\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5());
}