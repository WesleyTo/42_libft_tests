/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wto <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 20:06:26 by wto               #+#    #+#             */
/*   Updated: 2018/02/22 20:06:27 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		MAIN_H
# define	MAIN_H

#include "includes/libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	memset_tests();
int	bzero_tests();
int	memcpy_tests();
int	memccpy_tests();
int	memmove_tests();
int	memchr_tests();
int	memcmp_tests();
int	strlen_tests();
int	strdup_tests();
int	strcpy_tests();
int	strncpy_tests();
int	strcat_tests();
int	strncat_tests();
int	strlcat_tests();
int	strchr_tests();
int	strrchr_tests();
int	strstr_tests();
int	strnstr_tests();
int	strcmp_tests();
int	strncmp_tests();
int	atoi_tests();
int	isalpha_tests();
int	isdigit_tests();
int	isalnum_tests();
int	isascii_tests();
int	isprint_tests();
int	toupper_tests();
int	tolower_tests();

int	memalloc_tests();
int	memdel_tests();
int	strnew_tests();
int	strdel_tests();
int	strclr_tests();
int	striter_tests();
int	striteri_tests();
int	strmap_tests();
int	strmapi_tests();
int	strequ_tests();
int	strnequ_tests();
int	strsub_tests();
int	strjoin_tests();
int	strtrim_tests();
int	strsplit_tests();
int	itoa_tests();
int	putchar_tests();
int	putstr_tests();
int	putendl_tests();
int	putnbr_tests();
int	putchar_fd_tests();
int	putstr_fd_tests();
int	putendl_fd_tests();
int	putnbr_fd_tests();

int	lstnew_tests();
int	lstdelone_tests();
int	lstdel_tests();
int	lstadd_tests();
int	lstiter_tests();
int	lstmap_tests();

int	lstbuild_tests();
int	lstrev_tests();
int	lstinsert_tests();
int quicksort_tests();
int itoa_base_tests();
int	strupper_tests();
int	strlower_tests();

int	num_memset_tests();
int	num_bzero_tests();
int	num_memcpy_tests();
int	num_memccpy_tests();
int	num_memmove_tests();
int	num_memchr_tests();
int	num_memcmp_tests();
int	num_strlen_tests();
int	num_strdup_tests();
int	num_strcpy_tests();
int	num_strncpy_tests();
int	num_strcat_tests();
int	num_strncat_tests();
int	num_strlcat_tests();
int	num_strchr_tests();
int	num_strrchr_tests();
int	num_strstr_tests();
int	num_strnstr_tests();
int	num_strcmp_tests();
int	num_strncmp_tests();
int	num_atoi_tests();
int	num_isalpha_tests();
int	num_isdigit_tests();
int	num_isalnum_tests();
int	num_isascii_tests();
int	num_isprint_tests();
int	num_toupper_tests();
int	num_tolower_tests();

int	num_memalloc_tests();
int	num_memdel_tests();
int	num_strnew_tests();
int	num_strdel_tests();
int	num_strclr_tests();
int	num_striter_tests();
int	num_striteri_tests();
int	num_strmap_tests();
int	num_strmapi_tests();
int	num_strequ_tests();
int	num_strnequ_tests();
int	num_strsub_tests();
int	num_strjoin_tests();
int	num_strtrim_tests();
int	num_strsplit_tests();
int	num_itoa_tests();
int	num_putchar_tests();
int	num_putstr_tests();
int	num_putendl_tests();
int	num_putnbr_tests();
int	num_putchar_fd_tests();
int	num_putstr_fd_tests();
int	num_putendl_fd_tests();
int	num_putnbr_fd_tests();

int	num_lstnew_tests();
int	num_lstdelone_tests();
int	num_lstdel_tests();
int	num_lstadd_tests();
int	num_lstiter_tests();
int	num_lstmap_tests();

int	num_lstbuild_tests();
int	num_lstrev_tests();
int	num_lstinsert_tests();
int	num_quicksort_tests();
int	num_itoa_base_tests();
int	num_strlower_tests();
int	num_strupper_tests();

#endif
