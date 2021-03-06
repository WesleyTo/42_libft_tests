/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 22:10:46 by wto               #+#    #+#             */
/*   Updated: 2018/02/24 22:10:55 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for normal input";
	char *haystack = "123456789";
	char *needle = "2345";
	char *result = strnstr(haystack, needle, 9);
	char *ft_result = ft_strnstr(haystack, needle, 9);

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
	char *result = strnstr(haystack, needle, 9);
	char *ft_result = ft_strnstr(haystack, needle, 9);
	
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
	char *result = strnstr(haystack, needle, 9);
	char *ft_result = ft_strnstr(haystack, needle, 9);
	
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
	char *result = strnstr(haystack, needle, 9);
	char *ft_result = ft_strnstr(haystack, needle, 9);
	
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
	char *result = strnstr(haystack, needle, 9);
	char *ft_result = ft_strnstr(haystack, needle, 9);
	
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
	char *result = strnstr(haystack, needle, 0);
	char *ft_result = ft_strnstr(haystack, needle, 0);
	
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
	char *result = strnstr(haystack, needle, 4);
	char *ft_result = ft_strnstr(haystack, needle, 4);
	
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, haystack, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test8()
{
	int test_num = 8;
	char *failure = "failed for normal input - searched beyond the specified length";
	char *haystack = "1234";
	char *needle = "234";
	char *result = strnstr(haystack, needle, 1);
	char *ft_result = ft_strnstr(haystack, needle, 1);
	
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, haystack, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test9()
{
	int test_num = 9;
	char *failure = "failed for normal input - needle in haystack but longer than specified length";
	char *haystack = "1234";
	char *needle = "12";
	char *result = strnstr(haystack, needle, 1);
	char *ft_result = ft_strnstr(haystack, needle, 1);
	
	if (result != ft_result)
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, haystack, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_strnstr_tests(void)
{
	return (9);
}

int  strnstr_tests(void)
{
	printf("==============================\nTesting ft_strnstr\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5() + test6() + test7() + test8() + test9());
}