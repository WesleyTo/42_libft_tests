/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 22:19:31 by wto               #+#    #+#             */
/*   Updated: 2018/02/22 22:19:34 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	void *a;
	void *aft;
	int size = 10;

	a = memset(malloc(size), '0', size);
	aft = memset(malloc(size * 2), '0', size);
	if (memcmp(a, aft, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, "(none)", a, aft, failure);
		return (0);
	}
	free(a);
	free(aft);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *failure = "failed for different sized memory allocations";
	void *a;
	void *aft;
	int size = 10;

	a = memset(malloc(size), '0', size);
	aft = memset(malloc(size * 2), '1', size * 2);
	aft = memset(malloc(size * 2), '0', size);
	if (memcmp(a, aft, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, "(none)", a, aft, failure);
		return (0);
	}
	free(a);
	free(aft);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	char *failure = "failed for different sized memory allocations";
	void *a;
	void *aft;
	int size = 10;

	a = memset(malloc(size), '0', size);
	aft = memset(malloc(size * 2), '1', size * 2);
	aft = memset(malloc(size * 2), '0', size);
	if (memcmp(a, aft, size * 2) == 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, "(none)", a, aft, failure);
		return (0);
	}
	free(a);
	free(aft);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_memcmp_tests(void)
{
	return (3);
}

int  memcmp_tests(void)
{
	printf("==============================\nTesting ft_memcmp\n==============================\n");
	return (test1() + test2() + test3());
}