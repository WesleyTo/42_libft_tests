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

	a = malloc(size);
	aft = malloc(size);
	bzero(a, size);
	ft_bzero(aft, size);
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
	char *failure = "failed when zeroing half the memory allocation";
	void *a;
	void *aft;
	int size = 10;

	a = malloc(size);
	aft = malloc(size);
	bzero(memset(a, '0', size), size / 2);
	ft_bzero(memset(a, '0', size), size / 2);
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
	char *failure = "failed when zeroing none of the memory allocation";
	void *a;
	void *aft;
	int size = 10;

	a = malloc(size);
	aft = malloc(size);
	bzero(memset(a, '0', size), 0);
	ft_bzero(memset(aft, '0', size), 0);
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

static int test4()
{
	int test_num = 4;
	char *failure = "failed when zeroing 1 byte";
	void *a;
	void *aft;
	int size = 10;

	a = malloc(size);
	aft = malloc(size);
	bzero(memset(a, '0', size), 1);
	ft_bzero(memset(aft, '0', size), 1);
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

int num_bzero_tests(void)
{
	return (4);
}

int bzero_tests(void)
{
	printf("==============================\nTesting ft_bzero\n==============================\n");
	return (test1() + test2() + test3() + test4());
}