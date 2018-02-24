/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:04:43 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 16:04:44 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	void *a;
	int size = 10;
	void *result;
	void *ft_result;

	a = memset(memset(malloc(size), '0', size), '1', size/2);
	result = strchr(a, '1');
	ft_result = ft_strchr(a, '1');
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, a, result, ft_result, failure);
		return (0);
	}
	free(a);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *failure = "failed for single character";
	void *a;
	int size = 1;
	void *result;
	void *ft_result;

	a = memset(malloc(size), '0', size);
	result = strchr(a, '0');
	ft_result = ft_strchr(a, '0');
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, a, result, ft_result, failure);
		return (0);
	}
	free(a);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	char *failure = "failed for character not found in input";
	void *a;
	int size = 10;
	void *result;
	void *ft_result;

	a = memset(memset(malloc(size), '0', size), '1', size/2);
	result = strchr(a, '2');
	ft_result = ft_strchr(a, '2');
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, a, result, ft_result, failure);
		return (0);
	}
	free(a);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *failure = "failed for premature exit on string null terminator";
	void *a;
	int size = 10;
	void *result;
	void *ft_result;

	a = memset(memset(malloc(size), '\0', size), '1', size/2);
	result = strchr(a, '1');
	ft_result = ft_strchr(a, '1');
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, a, result, ft_result, failure);
		return (0);
	}
	free(a);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_strchr_tests(void)
{
	return (4);
}

int  strchr_tests(void)
{
	printf("==============================\nTesting ft_strchr\n==============================\n");
	return (test1() + test2() + test3() + test4());
}