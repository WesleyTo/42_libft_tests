/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstbuild.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:48:10 by wto               #+#    #+#             */
/*   Updated: 2018/02/24 15:48:10 by wto              ###   ########.fr       */
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
	temp = lst;
	for (int i = 0; i < size; i++)
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
	temp = lst;
	for (int i = 0; i < size; i++)
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
	temp = lst;
	for (int i = 0; i < size; i++)
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

int num_lstbuild_tests(void)
{
	return (3);
}

int  lstbuild_tests(void)
{
	printf("==============================\nTesting ft_lstbuild\n==============================\n");
	return (test1() + test2() + test3());
}
