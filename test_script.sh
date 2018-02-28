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
echo ============================================================
echo Norminette...
echo ============================================================
norminette ft_*.c libft.h

echo
echo ============================================================
echo Making library...
echo ============================================================
make
make all
make clean
make fclean
make re

echo
echo ============================================================
echo Compiling tests...
echo ============================================================
echo "gcc -Wall -Wextra -Werror -c main.h libft.h test_ft_*.c"
gcc -Wall -Wextra -Werror -c main.h test_ft_*.c
echo "gcc -Wall -Wextra -Werror -o main main.c libft.a test_ft_*.o"
gcc -Wall -Wextra -Werror -o main main.c libft.a test_ft_*.o

echo
echo ============================================================
echo Testing...
echo ============================================================
echo "./main"
./main

echo
echo ============================================================
echo Cleaning directory...
echo ============================================================
rm main
make fclean