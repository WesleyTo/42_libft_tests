/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:49:51 by wto               #+#    #+#             */
/*   Updated: 2018/02/23 16:49:52 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	int size = 13;
	char *src = "Copy Me";
	char *dst = strndup("Dest \0111111", size);
	char *ft_dst = strndup("Dest \0111111", size);
	size_t result;
	size_t ft_result;

	result = strlcat(dst, src, size);
	ft_result = ft_strlcat(ft_dst, src, size);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %zu | Got: %zu\n | %s\n", test_num, src, result, ft_result, failure);
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
	char *failure = "failed for large src input";
	int size = 13;
	char *src = "Try to copy me but weird stuff might happen because I'm too large and your strlcat might not be working properly";
	char *dst = strndup("Dest \0111111", size);
	char *ft_dst = strndup("Dest \0111111", size);
	size_t result;
	size_t ft_result;

	result = strlcat(dst, src, size);
	ft_result = ft_strlcat(ft_dst, src, size);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %zu | Got: %zu\n | %s\n", test_num, src, result, ft_result, failure);
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
	char *failure = "failed for small src input";
	int size = 13;
	char *src = "A";
	char *dst = strndup("Dest \0111111", size);
	char *ft_dst = strndup("Dest \0111111", size);
	size_t result;
	size_t ft_result;

	result = strlcat(dst, src, size);
	ft_result = ft_strlcat(ft_dst, src, size);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %zu | Got: %zu\n | %s\n", test_num, src, result, ft_result, failure);
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
	char *failure = "failed for empty src input";
	int size = 13;
	char *src = "";
	char *dst = strndup("Dest \0111111", size);
	char *ft_dst = strndup("Dest \0111111", size);
	size_t result;
	size_t ft_result;

	result = strlcat(dst, src, size);
	ft_result = ft_strlcat(ft_dst, src, size);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %zu | Got: %zu\n | %s\n", test_num, src, result, ft_result, failure);
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
	char *failure = "failed for 'empty' dst input";
	int size = 13;
	char *src = "";
	char *dst = strndup("\011111111111", size);
	char *ft_dst = strndup("\011111111111", size);
	size_t result;
	size_t ft_result;

	result = strlcat(dst, src, size);
	ft_result = ft_strlcat(ft_dst, src, size);
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %zu | Got: %zu\n | %s\n", test_num, src, result, ft_result, failure);
		return (0);
	}
	free(dst);
	free(ft_dst);
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_strlcat_tests(void)
{
	return (5);
}

int  strlcat_tests(void)
{
	printf("==============================\nTesting ft_strlcat\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5());
}