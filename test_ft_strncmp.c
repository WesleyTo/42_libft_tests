/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 17:30:44 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 17:30:46 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for identical input";
	char *str = "I'm A String!";
	char *sft = "I'm A String!";
	int size = strlen(str);
	int result;
	int ft_result;

	result = strncmp(str, sft, size);
	ft_result = ft_strncmp(str, sft, size);
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
	int size = strlen(str);
	int result;
	int ft_result;

	result = strncmp(str, sft, size);
	ft_result = ft_strncmp(str, sft, size);
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
	char *failure = "failed for different inputs that are identical up to n";
	char *str = "I'm A String!";
	char *sft = "I'm Different!";
	int size = 4;
	int result;
	int ft_result;

	result = strncmp(str, sft, size);
	ft_result = ft_strncmp(str, sft, size);
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
	char *failure = "failed for different inputs of the same length";
	char *str = "I Am A String!";
	char *sft = "I'm Different!";
	int size = strlen(str);
	int result;
	int ft_result;

	result = strncmp(str, sft, size);
	ft_result = ft_strncmp(str, sft, size);
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
	char *failure = "failed for empty strings";
	char *str = "";
	char *sft = "";
	int result;
	int ft_result;

	result = strncmp(str, sft, 0);
	ft_result = ft_strncmp(str, sft, 0);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, str, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test6()
{
	int test_num = 6;
	char *failure = "failed for empty string with non-empty string";
	char *str = "Not Empty";
	char *sft = "";
	int size = strlen(str);
	int result;
	int ft_result;

	result = strncmp(str, sft, size);
	ft_result = ft_strncmp(str, sft, size);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %d | Got: %d\n | %s\n", test_num, str, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_strncmp_tests(void)
{
	return (6);
}

int strncmp_tests(void)
{
	printf("==============================\nTesting ft_strncmp\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5() + test6());
}