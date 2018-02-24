/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 11:59:25 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 11:59:26 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	void *input;
	void *result;
	void *ft_result;
	int size = 10;

	input = memset(memset(malloc(size), '0', size), '1', size / 2);
	result = memmove(malloc(size), input, size);
	ft_result = ft_memmove(malloc(size), input, size);
	if (memcmp(result, ft_result, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	free(input);
	free(result);
	free(ft_result);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *failure = "failed for overlapping src and dst (dst after src)";
	void *input;
	void *ft_input;
	void *result;
	void *ft_result;
	int size = 10;

	input = memset(memset(malloc(size + 2), '0', size + 2), '1', (size + 2) / 2);
	ft_input = memset(memset(malloc(size + 2), '0', size + 2), '1', (size + 2) / 2);
	result = memmove(input + 2, input, size);
	ft_result = ft_memmove(ft_input + 2, ft_input, size);
	if (memcmp(result, ft_result, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	free(input);
	free(ft_input);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	char *failure = "failed for overlapping src and dst (dst before src)";
	void *input;
	void *ft_input;
	void *result;
	void *ft_result;
	int size = 10;

	input = memset(memset(malloc(size + 2), '0', size + 2), '1', (size + 2) / 2);
	ft_input = memset(memset(malloc(size + 2), '0', size + 2), '1', (size + 2) / 2);
	input += 2;
	ft_input += 2;
	result = memmove(input - 2, input, size);
	ft_result = ft_memmove(ft_input - 2, ft_input, size);
	if (memcmp(result, ft_result, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	free(input - 2);
	free(ft_input - 2);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *failure = "failed for normal input - returned pointer is not the same as dst";
	void *input;
	void *result;
	void *ft_result;
	int size = 10;

	input = memset(malloc(size), '0', size);
	result = malloc(size);
	ft_result = ft_memmove(result, input, size);
	if (ft_result != result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	free(input);
	free(result);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_memmove_tests(void)
{
	return (4);
}

int  memmove_tests(void)
{
	printf("==============================\nTesting ft_memmove\n==============================\n");
	return (test1() + test2() + test3() + test4());
}