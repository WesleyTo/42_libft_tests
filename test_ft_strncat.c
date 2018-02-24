/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 17:16:23 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 17:16:25 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	char *src = "Copy Me";
	int size = strlen(src);
	char *dst = strndup("Dest \01111111", size);
	char *ft_dst = strndup("Dest \01111111", size);

	dst = strncat(dst, src, size);
	ft_dst = ft_strncat(ft_dst, src, size);
	if (strcmp(dst, ft_dst) != 0)
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
	char *failure = "failed for normal input - copy size smaller than src";
	char *src = "Copy Me";
	int size = strlen(src);
	char *dst = strndup("Dest \01111111", size);
	char *ft_dst = strndup("Dest \01111111", size);

	dst = strncat(dst, src, size - 2);
	ft_dst = ft_strncat(ft_dst, src, size - 2);
	if (strcmp(dst, ft_dst) != 0)
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
	char *failure = "failed for normal input - copy size larger than src";
	char *src = "Copy Me";
	int size = strlen(src);
	char *dst = strndup("Dest \01111111", size);
	char *ft_dst = strndup("Dest \01111111", size);

	dst = strncat(dst, src, size + 2);
	ft_dst = ft_strncat(ft_dst, src, size + 2);
	if (strcmp(dst, ft_dst) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, ft_dst, failure);
		return (0);
	}
	free(dst);
	free(ft_dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *failure = "failed for empty src string";
	char *src = "";
	int size = strlen(src);
	char *dst = strndup("Dest \01111111", size);
	char *ft_dst = strndup("Dest \01111111", size);

	dst = strncat(dst, src, size);
	ft_dst = ft_strncat(ft_dst, src, size);
	if (strcmp(dst, ft_dst) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, ft_dst, failure);
		return (0);
	}
	free(dst);
	free(ft_dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test5()
{
	int test_num = 5;
	char *failure = "failed for 'empty' dst string";
	char *src = "Copy Me";
	int size = strlen(src);
	char *dst = strndup("\01111111", size);
	char *ft_dst = strndup("\01111111", size);

	dst = strncat(dst, src, size);
	ft_dst = ft_strncat(ft_dst, src, size);
	if (strcmp(dst, ft_dst) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, ft_dst, failure);
		return (0);
	}
	free(dst);
	free(ft_dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test6()
{
	int test_num = 6;
	char *failure = "failed for truly empty dst string - did you null terminate?";
	char *src = "Copy Me";
	int size = strlen(src);
	char *dst = strdup("");
	char *ft_dst = strdup("");

	dst = strncat(dst, src, size);
	ft_dst = ft_strncat(ft_dst, src, size);
	if (strcmp(dst, ft_dst) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, src, dst, ft_dst, failure);
		return (0);
	}
	free(dst);
	free(ft_dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_strncat_tests(void)
{
	return (6);
}

int  strncat_tests(void)
{
	printf("==============================\nTesting ft_strncat\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5() + test6());
}