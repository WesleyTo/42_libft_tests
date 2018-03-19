/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftstrupper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 19:12:42 by wto               #+#    #+#             */
/*   Updated: 2018/03/18 19:12:44 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	char *failure = "failed for mixed string";
	char *str = "This Is A String";
	char *ftstr = strdup(str);
	char *expected = "THIS IS A STRING";

	ft_strupper(ftstr);
	if (strcmp(ftstr, expected))
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, str, expected, ftstr, failure);
		free(ftstr);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	free(ftstr);
	return (1);
}

static int test2()
{
	int test_num = 2;
	char *failure = "failed for all lowercase string";
	char *str = "this is a string";
	char *ftstr = strdup(str);
	char *expected = "THIS IS A STRING";

	ft_strupper(ftstr);
	if (strcmp(ftstr, expected))
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, str, expected, ftstr, failure);
		free(ftstr);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	free(ftstr);
	return (1);
}

static int test3()
{
	int test_num = 3;
	char *failure = "failed for all uppercase string (no change)";
	char *str = "THIS IS A STRING";
	char *ftstr = strdup(str);
	char *expected = "THIS IS A STRING";

	ft_strupper(ftstr);
	if (strcmp(ftstr, expected))
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, str, expected, ftstr, failure);
		free(ftstr);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	free(ftstr);
	return (1);
}

static int test4()
{
	int test_num = 4;
	char *failure = "failed for empty string";
	char *str = "";
	char *ftstr = strdup(str);
	char *expected = "";

	ft_strupper(ftstr);
	if (strcmp(ftstr, expected))
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, str, expected, ftstr, failure);
		free(ftstr);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	free(ftstr);
	return (1);
}

static int test5()
{
	int test_num = 5;
	char *failure = "failed for non-alpha string";
	char *str = "1234567890!@#$%^&*()-=_+[]{}`~,.<>/?;:'\"|\\";
	char *ftstr = strdup(str);
	char *expected = "1234567890!@#$%^&*()-=_+[]{}`~,.<>/?;:'\"|\\";

	ft_strupper(ftstr);
	if (strcmp(ftstr, expected))
	{
		printf("\tTest %02d: FAILURE | Input: %s | Expected: %s | Got: %s\n | %s\n", test_num, str, expected, ftstr, failure);
		free(ftstr);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	free(ftstr);
	return (1);
}

int num_strupper_tests(void)
{
	return (5);
}

int strupper_tests(void)
{
	printf("==============================\nTesting ft_strupper\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5());
}