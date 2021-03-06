/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:20:42 by wto               #+#    #+#             */
/*   Updated: 2018/02/22 17:20:43 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void files_exist(void)
{
	int found;
	const char **files;

	const char *p1_files[] = {"ft_memset.c","ft_bzero.c","ft_memcpy.c","ft_memccpy.c","ft_memmove.c",
							"ft_memchr.c","ft_memcmp.c","ft_strlen.c","ft_strdup.c","ft_strcpy.c",
							"ft_strncpy.c","ft_strcat.c","ft_strncat.c","ft_strlcat.c","ft_strchr.c",
							"ft_strrchr.c","ft_strstr.c","ft_strnstr.c","ft_strcmp.c","ft_strncmp.c",
							"ft_atoi.c","ft_isalpha.c","ft_isdigit.c","ft_isalnum.c","ft_isascii.c",
							"ft_isprint.c","ft_toupper.c","ft_tolower.c"};
	const char *p2_files[] = {"ft_memalloc.c","ft_memdel.c","ft_strnew.c","ft_strdel.c","ft_strclr.c",
							"ft_striter.c","ft_striteri.c","ft_strmap.c","ft_strmapi.c","ft_strequ.c",
							"ft_strnequ.c","ft_strsub.c","ft_strjoin.c","ft_strtrim.c","ft_strsplit.c",
							"ft_itoa.c","ft_putchar.c","ft_putstr.c","ft_putendl.c","ft_putnbr.c",
							"ft_putchar.c","ft_putstr.c","ft_putendl.c","ft_putnbr.c"};
	const char *bonus_files[] = {"ft_lstnew.c","ft_lstdelone.c","ft_lstdel.c","ft_lstadd.c",
							"ft_lstiter.c","ft_lstmap.c"};
	/*
	const char *p1_files[] = {"src/ft_memset.c","src/ft_bzero.c","src/ft_memcpy.c","src/ft_memccpy.c","src/ft_memmove.c",
							"src/ft_memchr.c","src/ft_memcmp.c","src/ft_strlen.c","src/ft_strdup.c","src/ft_strcpy.c",
							"src/ft_strncpy.c","src/ft_strcat.c","src/ft_strncat.c","src/ft_strlcat.c","src/ft_strchr.c",
							"src/ft_strrchr.c","src/ft_strstr.c","src/ft_strnstr.c","src/ft_strcmp.c","src/ft_strncmp.c",
							"src/ft_atoi.c","src/ft_isalpha.c","src/ft_isdigit.c","src/ft_isalnum.c","src/ft_isascii.c",
							"src/ft_isprint.c","src/ft_toupper.c","src/ft_tolower.c"};
	const char *p2_files[] = {"src/ft_memalloc.c","src/ft_memdel.c","src/ft_strnew.c","src/ft_strdel.c","src/ft_strclr.c",
							"src/ft_striter.c","src/ft_striteri.c","src/ft_strmap.c","src/ft_strmapi.c","src/ft_strequ.c",
							"src/ft_strnequ.c","src/ft_strsub.c","src/ft_strjoin.c","src/ft_strtrim.c","src/ft_strsplit.c",
							"src/ft_itoa.c","src/ft_putchar.c","src/ft_putstr.c","src/ft_putendl.c","src/ft_putnbr.c",
							"src/ft_putchar.c","src/ft_putstr.c","src/ft_putendl.c","src/ft_putnbr.c"};
	const char *bonus_files[] = {"src/ft_lstnew.c","src/ft_lstdelone.c","src/ft_lstdel.c","src/ft_lstadd.c",
							"src/ft_lstiter.c","src/ft_lstmap.c"};	
	*/						
	const char **files_tiers[] = {p1_files, p2_files, bonus_files};
	int bounds[] = {28, 24, 6};
	for (int tier = 0; tier < 3; tier++)
	{
		files = files_tiers[tier];
		found = 0;
		for (int i = 0; i < bounds[tier]; i++)
		{
			if (access(files[i], F_OK) == -1)
				printf("\tMissing Part %d file: %s\n", tier + 1, files[i]);
			else
				found++;
		}
		if (found == bounds[tier])
			printf(">>> All Part %d files found\n", tier + 1);
		else
			printf(">>> Missing %d of %d Part %d files\n", bounds[tier] - found, bounds[tier], tier + 1);
	}
}

static int num_part1_tests(void)
{
	int total = 0;
	total += num_atoi_tests() + num_bzero_tests() + num_isalnum_tests() + num_isalpha_tests();
	total += num_isascii_tests() + num_isdigit_tests() + num_isprint_tests() + num_memccpy_tests();
	total += num_memchr_tests() + num_memcmp_tests() + num_memcpy_tests() + num_memmove_tests();
	total += num_memset_tests() + num_strcat_tests() + num_strchr_tests() + num_strcmp_tests();
	total += num_strcpy_tests() + num_strdup_tests() + num_strlcat_tests() + num_strlen_tests();
	total += num_strncat_tests() + num_strncmp_tests() + num_strncpy_tests() + num_strnstr_tests();
	total += num_strrchr_tests() + num_strstr_tests() + num_tolower_tests() + num_toupper_tests();
	return (total);
}

static int num_part2_tests(void)
{
	int total = 0;
	total += num_itoa_tests();
	//total += num_memalloc_tests();
	//total += num_memdel_tests();
	//total += num_strclr_tests();
	//total += num_strdel_tests();
	//total += num_strequ_tests();
	//total += num_striter_tests();
	//total += num_striteri_tests();
	//total += num_strjoin_tests();
	//total += num_strmap_tests();
	//total += num_strmapi_tests();
	//total += num_strnequ_tests();
	//total += num_strnew_tests();
	//total += num_strsplit_tests();
	//total += num_strsub_tests();
	//total += num_strtrim_tests();
	return (total);
}

static int num_bonus_tests(void)
{
	int total = 0;
	//total += num_lstadd_tests();
	//total += num_lstdel_tests();
	//total += num_lstdelone_tests();
	//total += num_lstiter_tests();
	//total += num_lstmap_tests();
	//total += num_lstnew_tests();
	return (total);
}

static int test_part1(void)
{
	int successes = 0;

	successes += atoi_tests() + bzero_tests() + isalnum_tests()+ isalpha_tests();
	successes += isascii_tests() + isdigit_tests() + isprint_tests()+ memccpy_tests();
	successes += memchr_tests() + memcmp_tests() + memcpy_tests() + memmove_tests();
	successes += memset_tests() + strcat_tests() + strchr_tests() + strcmp_tests();
	successes += strcpy_tests() + strdup_tests() + strlcat_tests() + strlen_tests();
	successes += strncat_tests() + strncmp_tests() + strncpy_tests() + strnstr_tests();
	successes += strrchr_tests() + strstr_tests() + tolower_tests() + toupper_tests();

	return (successes);
}

static int test_part2(void)
{
	int successes = 0;
	
	successes += itoa_tests();
	//successes += memalloc_tests();
	//successes += memdel_tests();
	//successes += strclr_tests();
	//successes += strdel_tests();
	//successes += strequ_tests();
	//successes += striter_tests();
	//successes += striteri_tests();
	//successes += strjoin_tests();
	//successes += strmap_tests();
	//successes += strmapi_tests();
	//successes += strnequ_tests();
	//successes += strnew_tests();
	//successes += strsplit_tests();
	//successes += strsub_tests();
	//successes += strtrim_tests();

	return (successes);
}
static int test_bonus(void)
{
	int successes = 0;

	//successes += lstadd_tests();
	//successes += lstdel_tests();
	//successes += lstdelone_tests();
	//successes += lstiter_tests();
	//successes += lstmap_tests();
	//successes += lstnew_tests();

	return (successes);
}

int main(void)
{

	files_exist();
	int successes = test_part1() + test_part2() + test_bonus();
	int total = num_part1_tests() + num_part2_tests() + num_bonus_tests();

	char *hbar = "==============================";
	char *results = "  >>> RESULTS <<<";
	char *smhbar = "    -----------";
	char *pass = successes < 100 ? "     Passed: " : "    Passed: ";
	char *fail = total - successes < 100 ? "     Failed: " : "    Failed: ";
	printf("%s\n%s\n%s\n%s%d\n%s%d\n%s\n%s\n", hbar, results, smhbar, pass, successes, fail, total - successes, smhbar, hbar);
}