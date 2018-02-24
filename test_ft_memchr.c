/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 11:00:22 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 11:00:23 by wto              ###   ########.fr       */
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
	result = memchr(a, '1', size);
	ft_result = ft_memchr(a, '1', size);
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
	result = memchr(a, '0', size);
	ft_result = ft_memchr(a, '0', size);
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
	result = memchr(a, '2', size);
	ft_result = ft_memchr(a, '2', size);
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
	char *failure = "failed for empty (NULL) input";
	void *a;
	int size = 0;
	void *result;
	void *ft_result;

	a = NULL;
	result = memchr(a, '1', size);
	ft_result = ft_memchr(a, '1', size);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, a, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test5()
{
	int test_num = 5;
	char *failure = "failed for premature exit on string null terminator";
	void *a;
	int size = 10;
	void *result;
	void *ft_result;

	a = memset(memset(malloc(size), '\0', size), '1', size/2);
	result = memchr(a, '1', size);
	ft_result = ft_memchr(a, '1', size);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, a, result, ft_result, failure);
		return (0);
	}
	free(a);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_memchr_tests(void)
{
	return (5);
}

int  memchr_tests(void)
{
	printf("==============================\nTesting ft_memchr\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5());
}