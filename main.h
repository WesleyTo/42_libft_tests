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

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void	memset_tests();
void	bzero_tests();
void	memcpy_tests();
void	memccpy_tests();
void	memmove_tests();
void	memchr_tests();
void	memcmp_tests();
void	strlen_tests();
void	strdup_tests();
void	strcpy_tests();
void	strncpy_tests();
void	strcat_tests();
void	strncat_tests();
void	strlcat_tests();
void	strchr_tests();
void	strrchr_tests();
void	strstr_tests();
void	strnstr_tests();
void	strcmp_tests();
void	strncmp_tests();
void	atoi_tests();
void	isalpha_tests();
void	isdigit_tests();
void	isalnum_tests();
void	isascii_tests();
void	isprint_tests();
void	toupper_tests();
void	tolower_tests();

void	ft_memalloc_tests();
void	ft_memdel_tests();
void	ft_strnew_tests();
void	ft_strdel_tests();
void	ft_strclr_tests();
void	ft_striter_tests();
void	ft_striteri_tests();
void	ft_strmap_tests();
void	ft_strmapi_tests();
void	ft_strequ_tests();
void	ft_strnequ_tests();
void	ft_strsub_tests();
void	ft_strjoin_tests();
void	ft_strtrim_tests();
void	ft_strsplit_tests();
void	ft_itoa_tests();
void	ft_putchar_tests();
void	ft_putstr_tests();
void	ft_putendl_tests();
void	ft_putnbr_tests();
void	ft_putchar_fd_tests();
void	ft_putstr_fd_tests();
void	ft_putendl_fd_tests();
void	ft_putnbr_fd_tests();

void	ft_lstnew_tests();
void	ft_lstdelone_tests();
void	ft_lstdel_tests();
void	ft_lstadd_tests();
void	ft_lstiter_tests();
void	ft_lstmap_tests();

#endif
