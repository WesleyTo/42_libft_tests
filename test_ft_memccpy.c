/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 11:21:55 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 11:21:56 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	char *nullfailure = "failed for normal input - incorrect NULL returned";
	void *input;
	int size = 10;
	void *result;
	void *ft_result;
	void *ptr;
	void *ft_ptr;

	input = memset(memset(malloc(size), '0', size), '1', size / 2);
	result = memset(malloc(size), '2', size);
	ft_result = memset(malloc(size), '2', size);
	ptr = memccpy(result, input, '1', size);
	ft_ptr = ft_memccpy(ft_result, input, '1', size);
	if (memcmp(result, ft_result, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	if ((ptr && !ft_ptr) || (!ptr && ft_ptr))
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, nullfailure);
		return (0);
	}
	else if (ptr && *(unsigned char *)ptr != *(unsigned char *)ft_ptr)
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
	char *failure = "failed for character not in src";
	char *nullfailure = "failed for normal input - incorrect NULL returned";
	void *input;
	int size = 10;
	void *result;
	void *ft_result;
	void *ptr;
	void *ft_ptr;

	input = memset(memset(malloc(size), '0', size), '1', size / 2);
	result = memset(malloc(size), '2', size);
	ft_result = memset(malloc(size), '2', size);
	ptr = memccpy(result, input, '3', size);
	ft_ptr = ft_memccpy(ft_result, input, '3', size);
	if (memcmp(result, ft_result, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	if ((ptr && !ft_ptr) || (!ptr && ft_ptr))
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, nullfailure);
		return (0);
	}
	else if (ptr && *(unsigned char *)ptr != *(unsigned char *)ft_ptr)
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

static int test3()
{
	int test_num = 3;
	char *failure = "failed for size less than memory blocks";
	char *nullfailure = "failed for normal input - incorrect NULL returned";
	void *input;
	int size = 10;
	void *result;
	void *ft_result;
	void *ptr;
	void *ft_ptr;

	input = memset(memset(malloc(size), '0', size), '1', size / 2);
	result = memset(malloc(size), '2', size);
	ft_result = memset(malloc(size), '2', size);
	ptr = memccpy(result, input, '1', size / 4);
	ft_ptr = ft_memccpy(ft_result, input, '1', size / 4);
	if (memcmp(result, ft_result, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	if ((ptr && !ft_ptr) || (!ptr && ft_ptr))
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, nullfailure);
		return (0);
	}
	else if (ptr && *(unsigned char *)ptr != *(unsigned char *)ft_ptr)
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

static int test4()
{
	int test_num = 4;
	char *failure = "failed for character not in src but in dst";
	char *nullfailure = "failed for normal input - incorrect NULL returned";
	void *input;
	int size = 10;
	void *result;
	void *ft_result;
	void *ptr;
	void *ft_ptr;

	input = memset(memset(malloc(size), '0', size), '1', size / 2);
	result = memset(malloc(size), '2', size);
	ft_result = memset(malloc(size), '2', size);
	ptr = memccpy(result, input, '2', size);
	ft_ptr = ft_memccpy(ft_result, input, '2', size);
	if (memcmp(result, ft_result, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	if ((ptr && !ft_ptr) || (!ptr && ft_ptr))
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, nullfailure);
		return (0);
	}
	else if (ptr && *(unsigned char *)ptr != *(unsigned char *)ft_ptr)
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

int num_memccpy_tests(void)
{
	return (4);
}

int  memccpy_tests(void)
{
	printf("==============================\nTesting ft_memccpy\n==============================\n");
	return (test1() + test2() + test3() + test4());
}