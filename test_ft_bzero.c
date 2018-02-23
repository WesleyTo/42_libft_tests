/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 22:35:39 by wto               #+#    #+#             */
/*   Updated: 2018/02/22 22:35:39 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed when zeroing entire memory allocation";
	void *a;
	void *aft;
	int size = 10;

	a = bzero(malloc(size), size);
	aft = ft_bzero(malloc(size), size);
	if (memcmp(a, aft, size) != 0)
	{
		printf("\tTest %d: FAILURE | Input:\t%s | Expected:\t%s | Got:\t%s\n | %s\n", test_num, "(none)", a, aft, failure);
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
	char *failure = "failed when zeroing half the memory allocation";
	void *a;
	void *aft;
	int size = 10;

	a = bzero(memset(malloc(size), '0', size), size / 2);
	aft = ft_bzero(memset(malloc(size), '0', size), size / 2);
	if (memcmp(a, aft, size) != 0)
	{
		printf("\tTest %d: FAILURE | Input:\t%s | Expected:\t%s | Got:\t%s\n | %s\n", test_num, "(none)", a, aft, failure);
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
	char *failure = "failed when zeroing none of the memory allocation";
	void *a;
	void *aft;
	int size = 10;

	a = bzero(memset(malloc(size), '0', size), 0);
	aft = ft_bzero(memset(malloc(size), '0', size), 0);
	if (memcmp(a, aft, size) != 0)
	{
		printf("\tTest %d: FAILURE | Input:\t%s | Expected:\t%s | Got:\t%s\n | %s\n", test_num, "(none)", a, aft, failure);
		return (0);
	}
	free(a);
	free(aft);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *failure = "failed when zeroing 1 byte";
	void *a;
	void *aft;
	int size = 10;

	a = bzero(memset(malloc(size), '0', size), 1);
	aft = ft_bzero(memset(malloc(size), '0', size), 1);
	if (memcmp(a, aft, size) != 0)
	{
		printf("\tTest %d: FAILURE | Input:\t%s | Expected:\t%s | Got:\t%s\n | %s\n", test_num, "(none)", a, aft, failure);
		return (0);
	}
	free(a);
	free(aft);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

void bzero_tests(void)
{
	printf("==============================\nTesting ft_bzero\n==============================\n");
	test1();
	test2();
	test3();
	test4();
}