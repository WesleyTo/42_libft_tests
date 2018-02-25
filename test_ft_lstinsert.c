/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstinsert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:54:40 by wto               #+#    #+#             */
/*   Updated: 2018/02/24 16:54:42 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	int arr[] = {1, 2, 4, 5};
	int size = 4;
	int arrfinal[] = {1, 2, 3, 4, 5};
	t_list *lst;
	t_list *temp;
	int value = 3;
	int location = 2;
	char *failure = "failed for normal input";

	lst = ft_lstbuild(arr, sizeof(int), size);
	ft_lstinsert(&lst, location, (void *) &value, sizeof(int));
	temp = lst;
	for (int i = 0; i <= size; i++)
	{
		if (arrfinal[i] != *(int *)(lst->content))
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arrfinal[i], arrfinal[i], *(int *)(lst->content), failure);
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
	int size = 1;
	int arrfinal[] = {1, 2};
	t_list *lst;
	t_list *temp;
	int value = 2;
	int location = 1;
	char *failure = "failed for insertion into size-one list";

	lst = ft_lstbuild(arr, sizeof(int), size);
	ft_lstinsert(&lst, location, (void *) &value, sizeof(int));
	temp = lst;
	for (int i = 0; i <= size; i++)
	{
		if (arrfinal[i] != *(int *)(lst->content))
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arrfinal[i], arrfinal[i], *(int *)(lst->content), failure);
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
	int arr[] = {0};
	int size = 0;
	int arrfinal[] = {2};
	t_list *lst;
	t_list *temp;
	int value = 2;
	int location = 0;
	char *failure = "failed for insertion into empty list";

	lst = ft_lstbuild(arr, sizeof(int), size);
	ft_lstinsert(&lst, location, (void *) &value, sizeof(int));
	temp = lst;
	for (int i = 0; i <= size; i++)
	{
		if (arrfinal[i] != *(int *)(lst->content))
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arrfinal[i], arrfinal[i], *(int *)(lst->content), failure);
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

static int test4()
{
	int test_num = 4;
	int arr[] = {1, 2, 3, 4};
	int size = 4;
	int arrfinal[] = {1, 2, 3, 4, 5};
	t_list *lst;
	t_list *temp;
	int value = 5;
	int location = 10;
	char *failure = "failed for insertion past list limit";

	lst = ft_lstbuild(arr, sizeof(int), size);
	ft_lstinsert(&lst, location, (void *) &value, sizeof(int));
	temp = lst;
	for (int i = 0; i <= size; i++)
	{
		if (arrfinal[i] != *(int *)(lst->content))
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arrfinal[i], arrfinal[i], *(int *)(lst->content), failure);
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

static int test5()
{
	int test_num = 5;
	int arr[] = {2, 3, 4, 5};
	int size = 4;
	int arrfinal[] = {1, 2, 3, 4, 5};
	t_list *lst;
	t_list *temp;
	int value = 1;
	int location = 0;
	char *failure = "failed for insertion at list beginning";

	lst = ft_lstbuild(arr, sizeof(int), size);
	ft_lstinsert(&lst, location, (void *) &value, sizeof(int));
	temp = lst;
	for (int i = 0; i <= size; i++)
	{
		if (arrfinal[i] != *(int *)(lst->content))
		{
			printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, arrfinal[i], arrfinal[i], *(int *)(lst->content), failure);
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

static int test6()
{
	int test_num = 6;
	t_list *lst;
	t_list *temp;
	int value = 1;
	int location = 0;
	char *failure = "failed for insertion into NULL list";

	lst = NULL;
	ft_lstinsert(&lst, location, (void *) &value, sizeof(int));
	temp = lst;
	if (*(int *)(lst->content) != value)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %d | Got: %d\n | %s\n", test_num, value, value, *(int *)(lst->content), failure);
		return (0);
	}
	while (temp)
	{
		free(temp->content);
		temp = temp->next;
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_lstinsert_tests(void)
{
	return (6);
}

int  lstinsert_tests(void)
{
	printf("==============================\nTesting ft_lstinsert\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5() + test6());
}
