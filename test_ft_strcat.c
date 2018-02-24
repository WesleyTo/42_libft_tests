/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 15:40:06 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 15:40:07 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	void *src;
	void *dst;
	void *ft_dst;
	int size = 10;

	src = memset(memset(malloc(size), '\0', size), '0', size - 1);
	dst = memset(memset(malloc(size + strlen(src) - 1), '\0', size - 1), '1', size - 1);
	ft_dst = memset(memset(malloc(size + strlen(src) - 1), '\0', size - 1), '1', size - 1);
	strcat(dst, src);
	ft_strcat(ft_dst, src);
	if (memcmp(dst, ft_dst, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, ft_dst, failure);
		return (0);
	}
	free(src);
	free(dst);
	free(ft_dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *failure = "failed for normal input - did not null terminate the copy";
	void *src;
	void *dst;
	void *ft_dst;
	int size = 10;

	src = memset(memset(malloc(size), '\0', size), '1', size - 1);
	dst = memset(malloc(size * 2), '0', size * 2);
	*(unsigned char *)dst = '\0';
	ft_dst = memset(malloc(size * 2), '0', size * 2);
	*(unsigned char *)ft_dst = '\0';
	strcat(dst, src);
	ft_strcat(ft_dst, src);
	if (memcmp(dst, ft_dst, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, ft_dst, failure);
		return (0);
	}
	free(src);
	free(dst);
	free(ft_dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	char *failure = "failed for empty source string";
	void *src;
	void *dst;
	void *ft_dst;
	int size = 1;

	src = memset(malloc(size), '\0', size);
	dst = memset(memset(malloc(2), '\0', size * 2), '0', size);
	ft_dst = memset(memset(malloc(2), '\0', size * 2), '0', size);
	strcat(dst, src);
	ft_strcat(ft_dst, src);
	if (memcmp(dst, ft_dst, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, ft_dst, failure);
		return (0);
	}
	free(src);
	free(dst);
	free(ft_dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *failure = "failed for empty destination string";
	void *src;
	void *dst;
	void *ft_dst;
	int size = 2;

	src = memset(memset(malloc(size), '\0', size), '1', size - 1);
	dst = memset(malloc(2), '\0', size);
	ft_dst = memset(malloc(2), '\0', size);
	strcat(dst, src);
	ft_strcat(ft_dst, src);
	if (memcmp(dst, ft_dst, size) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, ft_dst, failure);
		return (0);
	}
	free(src);
	free(dst);
	free(ft_dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_strcat_tests(void)
{
	return (4);
}

int  strcat_tests(void)
{
	printf("==============================\nTesting ft_strcat\n==============================\n");
	return (test1() + test2() + test3() + test4());
}