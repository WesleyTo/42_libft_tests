/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:39:46 by wto               #+#    #+#             */
/*   Updated: 2018/02/24 18:39:49 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	char *src = "Copy Me";
	int size = strlen(src);
	char *dst = memset(memset(malloc(size + 1), '0', size + 1), '1', size / 2);
	char *ft_dst = memset(memset(malloc(size + 1), '0', size + 1), '1', size / 2);

	strncpy(dst, src, size);
	ft_strncpy(ft_dst, src, size);
	if (memcmp(dst, ft_dst, size + 1) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, ft_dst, failure);
		return (0);
	}
	free(dst);
	free(ft_dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *failure = "failed - did not null terminate the rest of destination";
	char *src = "Copy Me";
	int size = strlen(src);
	char *dst = memset(memset(malloc(size * 2), '0', size * 2), '1', size);
	char *ft_dst = memset(memset(malloc(size * 2), '0', size * 2), '1', size);

	strncpy(dst, src, size);
	ft_strncpy(ft_dst, src, size);
	if (memcmp(dst, ft_dst, size * 2) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, ft_dst, failure);
		return (0);
	}
	if (memcmp(dst, ft_dst, size * 2) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, ft_dst, failure);
		return (0);
	}
	free(dst);
	free(ft_dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	char *failure = "failed when copying only part of the input string";
	char *src = "Copy Me";
	int size = strlen(src);
	char *dst = memset(malloc(size + 1), '0', size + 1);
	char *ft_dst = memset(malloc(size + 1), '0', size + 1);

	strncpy(dst, src, size - 3);
	ft_strncpy(ft_dst, src, size - 3);
	if (memcmp(dst, ft_dst, size + 1) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, ft_dst, failure);
		return (0);
	}
	free(dst);
	free(ft_dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_strncpy_tests(void)
{
	return (3);
}

int  strncpy_tests(void)
{
	printf("==============================\nTesting ft_strncpy\n==============================\n");
	return (test1() + test2() + test3());
}