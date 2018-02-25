/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstrev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:49:31 by wto               #+#    #+#             */
/*   Updated: 2018/02/24 16:49:32 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	int arr[] = {1, 2, 3, 4, 5};
	t_list *lst;
	t_list *temp;
	int size = 5;
	char *failure = "failed for normal input";

	lst = ft_lstbuild(arr, sizeof(int), size);
	ft_lstrev(&lst);
	temp = lst;
	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] != *(int *)(lst->content))
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arr[i], arr[i], *(int *)(lst->content), failure);
			return (0);
		}
		lst = lst->next;
	}
	while (temp)
	{
		free(temp->content);
		temp = temp->next;
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	int arr[] = {1};
	t_list *lst;
	t_list *temp;
	int size = 1;
	char *failure = "failed for size-one array";

	lst = ft_lstbuild(arr, sizeof(int), size);
	ft_lstrev(&lst);
	temp = lst;
	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] != *(int *)(lst->content))
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arr[i], arr[i], *(int *)(lst->content), failure);
			return (0);
		}
		lst = lst->next;
	}
	while (temp)
	{
		free(temp->content);
		temp = temp->next;
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	int arr[] = {};
	t_list *lst;
	t_list *temp;
	int size = 0;
	char *failure = "failed for empty array";

	lst = ft_lstbuild(arr, sizeof(int), size);
	ft_lstrev(&lst);
	temp = lst;
	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] != *(int *)(lst->content))
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arr[i], arr[i], *(int *)(lst->content), failure);
			return (0);
		}
		lst = lst->next;
	}
	while (temp)
	{
		free(temp->content);
		temp = temp->next;
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_lstrev_tests(void)
{
	return (3);
}

int  lstrev_tests(void)
{
	printf("==============================\nTesting ft_lstrev\n==============================\n");
	return (test1() + test2() + test3());
}
