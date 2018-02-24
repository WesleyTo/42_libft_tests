/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:25:46 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 16:25:47 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	char *src = "I'm A String!";
	int size = strlen(src) + 1;
	char *dst;
	char *dstft;

	dst = memset(memset(malloc(size), '1', size), '0', size - 1);
	dstft = memset(memset(malloc(size), '2', size), '0', size - 1);
	strcpy(dst, src);
	ft_strcpy(dstft, src);
	if (strcmp(dst, dstft) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, dstft, failure);
		return (0);
	}
	free(dst);
	free(dstft);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *failure = "failed for malformed string with null terminator in middle";
	char *src = "Copy This\0But Not This";
	int size = 21;
	char *dst;
	char *dstft;

	dst = memset(memset(malloc(size), '1', size), '0', size - 1);
	dstft = memset(memset(malloc(size), '2', size), '0', size - 1);
	strcpy(dst, src);
	ft_strcpy(dstft, src);
	if (strcmp(dst, dstft) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, dstft, failure);
		return (0);
	}
	free(dst);
	free(dstft);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	char *failure = "failed for empty src string";
	char *src = "";
	int size = strlen(src) + 1;
	char *dst;
	char *dstft;

	dst = memset(memset(malloc(size), '1', size), '0', size - 1);
	dstft = memset(memset(malloc(size), '2', size), '0', size - 1);
	strcpy(dst, src);
	ft_strcpy(dstft, src);
	if (strcmp(dst, dstft) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, dstft, failure);
		return (0);
	}
	free(dst);
	free(dstft);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_strcpy_tests(void)
{
	return (3);
}

int  strcpy_tests(void)
{
	printf("==============================\nTesting ft_strcpy\n==============================\n");
	return (test1() + test2() + test3());
}