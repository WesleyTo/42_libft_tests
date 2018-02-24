/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:41:24 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 16:41:25 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	char *src = "I'm A String!";
	char *dst;
	char *dstft;

	dst = strdup(src);
	dstft = ft_strdup(src);
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
	char *failure = "failed for empty string input";
	char *src = "";
	char *dst;
	char *dstft;

	dst = strdup(src);
	dstft = ft_strdup(src);
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
	char *failure = "failed for normal input - your ft_strdup returns the src pointer ";
	char *src = "I'm A String!";
	char *dst;

	dst = strdup(src);
	if (src == dst)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: not %p | Got: %p\n | %s\n", test_num, src, dst, src, failure);
		return (0);
	}
	free(dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *failure = "failed for malformed string with null terminator in the middle";
	char *src = "Duplicate This\0But Not This";
	char *dst;
	char *dstft;

	dst = strdup(src);
	dstft = ft_strdup(src);
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

int num_strdup_tests(void)
{
	return (4);
}

int  strdup_tests(void)
{
	printf("==============================\nTesting ft_strdup\n==============================\n");
	return (test1() + test2() + test3() + test4());
}