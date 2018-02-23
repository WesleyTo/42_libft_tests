# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test_script.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wto <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/22 17:23:56 by wto               #+#    #+#              #
#    Updated: 2018/02/22 17:23:57 by wto              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo Norminette...
norminette ft_*.c libft.h

echo Making library...
make

echo Compiling tests...
gcc -Wall -Wextra -Werror -o main main.c test_ft_*.c libft.a

echo Running tests...
./main

echo Cleaning directory...
rm main
make fclean