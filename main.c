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
#include "libft.h"

int main(void)
{

	int successes = 0;
	int total = 0;

	total += num_atoi_tests();
	successes += atoi_tests();
	total += num_bzero_tests();
	successes += bzero_tests();
	total += num_isalnum_tests();
	successes += isalnum_tests();
	total += num_isalpha_tests();
	successes += isalpha_tests();
	total += num_isascii_tests();
	successes += isascii_tests();	
	total += num_isdigit_tests();
	successes += isdigit_tests();
	total += num_isprint_tests();
	successes += isprint_tests();
	total += num_memccpy_tests();
	successes += memccpy_tests();
	total += num_memchr_tests();
	successes += memchr_tests();
	total += num_memcmp_tests();
	successes += memcmp_tests();
	total += num_memcpy_tests();
	successes += memcpy_tests();
	total += num_memmove_tests();
	successes += memmove_tests();
	total += num_memset_tests();
	successes += memset_tests();
	total += num_strcat_tests();
	successes += strcat_tests();
	total += num_strchr_tests();
	successes += strchr_tests();
	total += num_strcmp_tests();
	successes += strcmp_tests();
	total += num_strcpy_tests();
	successes += strcpy_tests();
	total += num_strdup_tests();
	successes += strdup_tests();
	total += num_strlcat_tests();
	successes += strlcat_tests();
	total += num_strlen_tests();
	successes += strlen_tests();
	total += num_strncat_tests();
	successes += strncat_tests();
	total += num_strncmp_tests();
	successes += strncmp_tests();
	//total += num_strncpy_tests();
	//successes += strncpy_tests();
	//total += num_strnstr_tests();
	//successes += strnstr_tests();
	//total += num_strrchr_tests();
	//successes += strrchr_tests();
	//total += num_strstr_tests();
	//successes += strstr_tests();
	total += num_tolower_tests();
	successes += tolower_tests();
	total += num_toupper_tests();
	successes += toupper_tests();

	//total += num_itoa_tests();
	//successes += itoa_tests();
	//total += num_memalloc_tests();
	//successes += memalloc_tests();
	//total += num_memdel_tests();
	//successes += memdel_tests();
	//total += num_putchar_tests();
	//successes += putchar_tests();
	//total += num_putchar_fd_tests();
	//successes += putchar_fd_tests();
	//total += num_putendl_tests();
	//successes += putendl_tests();
	//total += num_putendl_fd_tests();
	//successes += putendl_fd_tests();
	//total += num_putnbr_tests();
	//successes += putnbr_tests();
	//total += num_putnbr_fd_tests();
	//successes += putnbr_fd_tests();
	//total += num_putstr_tests();
	//successes += putstr_tests();
	//total += num_putstr_fd_tests();
	//successes += putstr_fd_tests();
	//total += num_strclr_tests();
	//successes += strclr_tests();
	//total += num_strdel_tests();
	//successes += strdel_tests();
	//total += num_strequ_tests();
	//successes += strequ_tests();
	//total += num_striter_tests();
	//successes += striter_tests();
	//total += num_striteri_tests();
	//successes += striteri_tests();
	//total += num_strjoin_tests();
	//successes += strjoin_tests();
	//total += num_strmap_tests();
	//successes += strmap_tests();
	//total += num_strmapi_tests();
	//successes += strmapi_tests();
	//total += num_strnequ_tests();
	//successes += strnequ_tests();
	//total += num_strnew_tests();
	//successes += strnew_tests();
	//total += num_strsplit_tests();
	//successes += strsplit_tests();
	//total += num_strsub_tests();
	//successes += strsub_tests();
	//total += num_strtrim_tests();
	//successes += strtrim_tests();

	//total += num_lstadd_tests();
	//successes += lstadd_tests();
	//total += num_lstdel_tests();
	//successes += lstdel_tests();
	//total += num_lstdelone_tests();
	//successes += lstdelone_tests();
	//total += num_lstiter_tests();
	//successes += lstiter_tests();
	//total += num_lstmap_tests();
	//successes += lstmap_tests();
	//total += num_lstnew_tests();
	//successes += lstnew_tests();

	printf("==============================\n>>> RESULTS <<<\n  Passed: %d\n  Failed: %d\n==============================\n", successes, total - successes);
}