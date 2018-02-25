/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_quicksort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 18:02:57 by wto               #+#    #+#             */
/*   Updated: 2018/02/24 18:02:58 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	int arr[] = {5, 3, 4, 2, 1};
	int arr_ft[] = {1, 2, 3, 4, 5};
	int size = 5;
	char *failure = "failed for normal input";

	ft_quicksort(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != arr_ft[i])
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arr[i], arr[i], arr_ft[i], failure);
			return (0);
		}
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	int arr[] = {1, 2, 3, 4, 5};
	int arr_ft[] = {1, 2, 3, 4, 5};
	int size = 5;
	char *failure = "failed for pre-sorted input";

	ft_quicksort(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != arr_ft[i])
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arr[i], arr[i], arr_ft[i], failure);
			return (0);
		}
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	int arr[] = {5, 4, 3, 2, 1};
	int arr_ft[] = {1, 2, 3, 4, 5};
	int size = 5;
	char *failure = "failed for reverse-sorted input";

	ft_quicksort(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != arr_ft[i])
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arr[i], arr[i], arr_ft[i], failure);
			return (0);
		}
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	int arr[] = {1};
	int arr_ft[] = {1};
	int size = 1;
	char *failure = "failed for size-one input array";

	ft_quicksort(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != arr_ft[i])
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arr[i], arr[i], arr_ft[i], failure);
			return (0);
		}
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test5()
{
	int test_num = 5;
	int arr[] = {};
	int arr_ft[] = {};
	int size = 0;
	char *failure = "failed for empty array";

	ft_quicksort(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != arr_ft[i])
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arr[i], arr[i], arr_ft[i], failure);
			return (0);
		}
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_quicksort_tests(void)
{
	return (5);
}

int  quicksort_tests(void)
{
	printf("==============================\nTesting ft_quicksort\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5());
}
