/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:03:04 by wto               #+#    #+#             */
/*   Updated: 2018/02/19 17:03:06 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	void *src;
	void *dst;
	void *dst_ft;
	int size = 10;
	int dstsize = 10;
	int cpysize = 10;

	src = memset(malloc(size), '0', size);
	dst = memset(malloc(dstsize), '1', dstsize);
	dst_ft = memset(malloc(dstsize), '1', dstsize);
	memcpy(dst, src, cpysize);
	ft_memcpy(dst_ft, src, cpysize);
	if (memcmp(dst, dst_ft, size) != 0)
	{
		printf("\tTest %d: FAILURE | Input:\t%s | Expected:\t%s | Got:\t%s\n | %s\n", test_num, src, dst, dst_ft, failure);
		return (0);
	}
	free(src);
	free(dst);
	free(dst_ft);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *failure = "failed for normal input - copied incorrect amount of data";
	void *src;
	void *dst;
	void *dst_ft;
	int size = 10;
	int dstsize = 10;
	int cpysize = 5;

	src = memset(malloc(size), '0', size);
	dst = memset(malloc(dstsize), '1', dstsize);
	dst_ft = memset(malloc(dstsize), '1', dstsize);
	memcpy(dst, src, cpysize);
	ft_memcpy(dst_ft, src, cpysize);
	if (memcmp(dst, dst_ft, size) != 0)
	{
		printf("\tTest %d: FAILURE | Input:\t%s | Expected:\t%s | Got:\t%s\n | %s\n", test_num, src, dst, dst_ft, failure);
		return (0);
	}
	free(src);
	free(dst);
	free(dst_ft);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	char *failure = "failed for normal input - copied incorrect amount of data";
	void *src;
	void *dst;
	void *dst_ft;
	int size = 10;
	int dstsize = 5;
	int cpysize = 5;

	src = memset(malloc(size), '0', size);
	dst = memset(malloc(dstsize), '1', dstsize);
	dst_ft = memset(malloc(dstsize), '1', dstsize);
	memcpy(dst, src, cpysize);
	ft_memcpy(dst_ft, src, cpysize);
	if (memcmp(dst, dst_ft, cpysize) != 0)
	{
		printf("\tTest %d: FAILURE | Input:\t%s | Expected:\t%s | Got:\t%s\n | %s\n", test_num, src, dst, dst_ft, failure);
		return (0);
	}
	free(src);
	free(dst);
	free(dst_ft);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *failure = "failed for normal input - didn't copy enough data";
	void *src;
	void *dst;
	void *dst_ft;
	int size = 10;
	int dstsize = 20;
	int cpysize = 15;

	src = memset(malloc(size), '0', size);
	dst = memset(malloc(dstsize), '1', dstsize);
	dst_ft = memset(malloc(dstsize), '1', dstsize);
	memcpy(dst, src, cpysize);
	ft_memcpy(dst_ft, src, cpysize);
	if (memcmp(dst, dst_ft, cpysize) != 0)
	{
		printf("\tTest %d: FAILURE | Input:\t%s | Expected:\t%s | Got:\t%s\n | %s\n", test_num, src, dst, dst_ft, failure);
		return (0);
	}
	free(src);
	free(dst);
	free(dst_ft);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

void memcpy_tests(void)
{
	printf("==============================\nTesting ft_memcpy\n==============================\n");
	test1();
	test2();
	test3();
	test4();
}