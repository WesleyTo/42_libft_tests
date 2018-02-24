/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 12:23:08 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 12:23:09 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	void *input;
	void *ft_input;
	int size = 10;

	input = memset(memset(malloc(size), '0', size), '1', size / 2);
	ft_input = ft_memset(ft_memset(malloc(size), '0', size), '1', size / 2);
	if (memcmp(input, ft_input, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, input, ft_input, failure);
		return (0);
	}
	free(input);
	free(ft_input);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *failure = "failed for normal input - didn't cast to unsigned char?";
	void *input;
	void *ft_input;
	int size = 10;

	input = memset(memset(malloc(size), 74896416, size), 16494654, size / 2);
	ft_input = ft_memset(ft_memset(malloc(size), 74896416, size), 16494654, size / 2);
	if (memcmp(input, ft_input, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, input, ft_input, failure);
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
	char *failure = "failed for single int input - didn't cast to unsigned char?";
	void *input;
	void *ft_input;
	int size = 10;

	input = memset(memset(malloc(size), '0', size), 16494654, 1);
	ft_input = ft_memset(ft_memset(malloc(size), '0', size), 16494654, 1);
	if (memcmp(input, ft_input, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, input, ft_input, failure);
		return (0);
	}
	free(input);
	free(ft_input);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *failure = "failed for setting 0 bytes";
	void *input;
	void *ft_input;
	int size = 10;

	input = memset(memset(malloc(size), '0', size), '1', 0);
	ft_input = ft_memset(ft_memset(malloc(size), '0', size), '1', 0);
	if (memcmp(input, ft_input, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, input, input, ft_input, failure);
		return (0);
	}
	free(input);
	free(ft_input);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_memset_tests(void)
{
	return (4);
}

int  memset_tests(void)
{
	printf("==============================\nTesting ft_memset\n==============================\n");
	return (test1() + test2() + test3() + test4());
}