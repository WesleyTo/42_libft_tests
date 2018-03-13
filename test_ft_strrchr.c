/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 17:22:18 by wto               #+#    #+#             */
/*   Updated: 2018/03/12 17:22:19 by wto              ###   ########.fr       */
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

	a = memset(memset(malloc(size), '1', size), '0', size/2);
	result = strrchr(a, '1');
	ft_result = ft_strrchr(a, '1');
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
	result = strrchr(a, '0');
	ft_result = ft_strrchr(a, '0');
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
	result = strrchr(a, '2');
	ft_result = ft_strrchr(a, '2');
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

	a = memset(memset(malloc(size), '1', size), '\0', size/2);
	result = strrchr(a, '1');
	ft_result = ft_strrchr(a, '1');
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, a, result, ft_result, failure);
		return (0);
	}
	free(a);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_strrchr_tests(void)
{
	return (4);
}

int  strrchr_tests(void)
{
	printf("==============================\nTesting ft_strrchr\n==============================\n");
	return (test1() + test2() + test3() + test4());
}