/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa_base_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 14:47:10 by wto               #+#    #+#             */
/*   Updated: 2018/03/17 14:47:10 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int test1()
{
	int test_num = 1;
	int input = 2345718;
	int base = 10;
	char *result = "2345718";
	char *ft_result;
	char *failure = "failed for regular positive number";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test2()
{
	int test_num = 2;
	int input = -1985234;
	int base = 10;
	char *result = "-1985234";
	char *ft_result;
	char *failure = "failed for regular negative number";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test3()
{
	int test_num = 3;
	int input = 2147483647;
	int base = 10;
	char *result = "2147483647";
	char *ft_result;
	char *failure = "failed for maximum integer";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test4()
{
	int test_num = 4;
	int input = -2147483648;
	int base = 10;
	char *result = "-2147483648";
	char *ft_result;
	char *failure = "failed for minimum integer";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test5()
{
	int test_num = 5;
	int input = 2345718;
	int base = 16;
	char *result = "23CAF6";
	char *ft_result;
	char *failure = "failed for regular positive number base 16";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test6()
{
	int test_num = 6;
	int input = -1985234;
	int base = 16;
	char *result = "1E4AD2";
	char *ft_result;
	char *failure = "failed for regular negative number base 16";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test7()
{
	int test_num = 7;
	int input = 2147483647;
	int base = 16;
	char *result = "7FFFFFFF";
	char *ft_result;
	char *failure = "failed for maximum integer base 16";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test8()
{
	int test_num = 8;
	int input = -2147483648;
	int base = 16;
	char *result = "80000000";
	char *ft_result;
	char *failure = "failed for minimum integer base 16";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test9()
{
	int test_num = 9;
	int input = 2345718;
	int base = 2;
	char *result = "1000111100101011110110";
	char *ft_result;
	char *failure = "failed for regular positive number base 2";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test10()
{
	int test_num = 10;
	int input = -1985234;
	int base = 2;
	char *result = "111100100101011010010";
	char *ft_result;
	char *failure = "failed for regular negative number base 2";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test11()
{
	int test_num = 11;
	int input = 2147483647;
	int base = 2;
	char *result = "1111111111111111111111111111111";
	char *ft_result;
	char *failure = "failed for maximum integer base 2";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test12()
{
	int test_num = 12;
	int input = -2147483648;
	int base = 2;
	char *result = "10000000000000000000000000000000";
	char *ft_result;
	char *failure = "failed for minimum integer base 2";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test13()
{
	int test_num = 13;
	int input = 2345718;
	int base = 5;
	char *result = "1100030333";
	char *ft_result;
	char *failure = "failed for regular positive number base 5";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test14()
{
	int test_num = 14;
	int input = -1985234;
	int base = 5;
	char *result = "1002011414";
	char *ft_result;
	char *failure = "failed for regular negative number base 5";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test15()
{
	int test_num = 15;
	int input = 2147483647;
	int base = 5;
	char *result = "13344223434042";
	char *ft_result;
	char *failure = "failed for maximum integer base 5";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test16()
{
	int test_num = 16;
	int input = -2147483648;
	int base = 5;
	char *result = "13344223434043";
	char *ft_result;
	char *failure = "failed for minimum integer base 5";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test17()
{
	int test_num = 17;
	int input = 2345718;
	int base = 9;
	char *result = "4364643";
	char *ft_result;
	char *failure = "failed for regular positive number base 9";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test18()
{
	int test_num = 18;
	int input = -1985234;
	int base = 9;
	char *result = "3655205";
	char *ft_result;
	char *failure = "failed for regular negative number base 9";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test19()
{
	int test_num = 19;
	int input = 2147483647;
	int base = 9;
	char *result = "5478773671";
	char *ft_result;
	char *failure = "failed for maximum integer base 9";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test20()
{
	int test_num = 20;
	int input = -2147483648;
	int base = 9;
	char *result = "5478773672";
	char *ft_result;
	char *failure = "failed for minimum integer base 9";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test21()
{
	int test_num = 21;
	int input = 2345718;
	int base = 13;
	char *result = "6418CB";
	char *ft_result;
	char *failure = "failed for regular positive number base 13";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test22()
{
	int test_num = 22;
	int input = -1985234;
	int base = 13;
	char *result = "5467C4";
	char *ft_result;
	char *failure = "failed for regular negative number base 13";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test23()
{
	int test_num = 23;
	int input = 2147483647;
	int base = 13;
	char *result = "282BA4AAA";
	char *ft_result;
	char *failure = "failed for maximum integer base 13";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test24()
{
	int test_num = 24;
	int input = -2147483648;
	int base = 13;
	char *result = "282BA4AAB";
	char *ft_result;
	char *failure = "failed for minimum integer base 13";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test25()
{
	int test_num = 25;
	int input = 2345718;
	int base = 8;
	char *result = "10745366";
	char *ft_result;
	char *failure = "failed for regular positive number base 8";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test26()
{
	int test_num = 26;
	int input = -1985234;
	int base = 8;
	char *result = "7445322";
	char *ft_result;
	char *failure = "failed for regular negative number base 8";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test27()
{
	int test_num = 27;
	int input = 2147483647;
	int base = 8;
	char *result = "17777777777";
	char *ft_result;
	char *failure = "failed for maximum integer base 8";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test28()
{
	int test_num = 28;
	int input = -2147483648;
	int base = 8;
	char *result = "20000000000";
	char *ft_result;
	char *failure = "failed for minimum integer base 8";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test29()
{
	int test_num = 29;
	int input = 2345718;
	int base = 6;
	char *result = "122135450";
	char *ft_result;
	char *failure = "failed for regular positive number base 6";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test30()
{
	int test_num = 30;
	int input = -1985234;
	int base = 6;
	char *result = "110314522";
	char *ft_result;
	char *failure = "failed for regular negative number base 6";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test31()
{
	int test_num = 31;
	int input = 2147483647;
	int base = 6;
	char *result = "553032005531";
	char *ft_result;
	char *failure = "failed for maximum integer base 6";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

static int test32()
{
	int test_num = 32;
	int input = -2147483648;
	int base = 6;
	char *result = "553032005532";
	char *ft_result;
	char *failure = "failed for minimum integer base 6";

	ft_result = ft_itoa_base(input, base);
	if (strcmp(ft_result, result) != 0)
	{
		printf("\tTest %02d: FAILURE | Input: %d | Expected: %s | Got: %s\n | %s\n", test_num, input, result, ft_result, failure);
		return (0);
	}
	printf("\tTest %02d: Success!\n", test_num);
	return (1);
}

int num_itoa_base_tests(void)
{
	return (32);
}

int itoa_base_tests(void)
{
	printf("==============================\nTesting ft_itoa_base\n==============================\n");
	return (test1() + test2() + test3() + test4() + test5() + test6() 
		+ test7() + test8() + test9() + test10() + test11() + test12()
		+ test13() + test14() + test15() + test16() + test17()
		+ test18() + test19() + test20() + test21() + test22()
		+ test23() + test24() + test25() + test26() + test27()
		+ test28() + test29() + test30() + test31() + test32());
}