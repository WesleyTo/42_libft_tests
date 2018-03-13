/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 16:55:11 by wto               #+#    #+#             */
/*   Updated: 2018/03/12 16:55:13 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	char *haystack = "123456789";
	char *needle = "2345";
	char *result = strstr(haystack, needle);
	char *ft_result = ft_strstr(haystack, needle);

	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, haystack, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *failure = "failed for normal input - needle at beginning";
	char *haystack = "123456789";
	char *needle = "1234";
	char *result = strstr(haystack, needle);
	char *ft_result = ft_strstr(haystack, needle);
	
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, haystack, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	char *failure = "failed for normal input - needle at end";
	char *haystack = "123456789";
	char *needle = "9";
	char *result = strstr(haystack, needle);
	char *ft_result = ft_strstr(haystack, needle);
	
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, haystack, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *failure = "failed for normal input - needle not in haystack";
	char *haystack = "123456789";
	char *needle = "ABCD";
	char *result = strstr(haystack, needle);
	char *ft_result = ft_strstr(haystack, needle);
	
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, haystack, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test5()
{
	int test_num = 5;
	char *failure = "failed for normal input - empty needle";
	char *haystack = "123456789";
	char *needle = "";
	char *result = strstr(haystack, needle);
	char *ft_result = ft_strstr(haystack, needle);
	
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, haystack, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test6()
{
	int test_num = 6;
	char *failure = "failed for normal input - empty needle and haystack";
	char *haystack = "";
	char *needle = "";
	char *result = strstr(haystack, needle);
	char *ft_result = ft_strstr(haystack, needle);
	
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, haystack, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test7()
{
	int test_num = 7;
	char *failure = "failed for invalid input - needle longer than haystack";
	char *haystack = "1234";
	char *needle = "12345";
	char *result = strstr(haystack, needle);
	char *ft_result = ft_strstr(haystack, needle);
	
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, haystack, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_strstr_tests(void)
{
	return (7);
}

int  strstr_tests(void)
{
	printf("==============================\nTesting ft_strstr\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5() + test6() + test7());
}