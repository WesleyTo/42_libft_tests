/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 17:10:38 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 17:10:45 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	char *src = "123456789";
	size_t result;
	size_t ft_result;

	result = strlen(src);
	ft_result = ft_strlen(src);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %zu | Got: %zu\n | %s\n", test_num, src, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *failure = "failed for single character string";
	char *src = "1";
	size_t result;
	size_t ft_result;

	result = strlen(src);
	ft_result = ft_strlen(src);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %zu | Got: %zu\n | %s\n", test_num, src, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	char *failure = "failed for empty string";
	char *src = "";
	size_t result;
	size_t ft_result;

	result = strlen(src);
	ft_result = ft_strlen(src);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %zu | Got: %zu\n | %s\n", test_num, src, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *failure = "failed for malformed string with null terminator in the middle";
	char *src = "1234\06789";
	size_t result;
	size_t ft_result;

	result = strlen(src);
	ft_result = ft_strlen(src);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %zu | Got: %zu\n | %s\n", test_num, src, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test5()
{
	int test_num = 5;
	char *failure = "failed for malformed string with null terminator at the beginning";
	char *src = "\0123456789";
	size_t result;
	size_t ft_result;

	result = strlen(src);
	ft_result = ft_strlen(src);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %zu | Got: %zu\n | %s\n", test_num, src, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_strlen_tests(void)
{
	return (5);
}

int strlen_tests(void)
{
	printf("==============================\nTesting ft_strlen\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5());
}