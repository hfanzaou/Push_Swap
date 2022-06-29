# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfanzaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 18:13:48 by hfanzaou          #+#    #+#              #
#    Updated: 2022/06/24 18:13:50 by hfanzaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = src/*.c push_swap.c
BSRC = bonus/*.c bonus/get_next_line/*.c
NAME = push_swap
LIBFT = libft/libft.a
FT_PRINTF = ft_printf/libftprintf.a
BONUS = checker	  

all : $(NAME)

bonus : $(BONUS)

$(BONUS) : $(BSRC)
	make bonus -C libft
	$(CC) $(CFLAGS) $(LIBFT) $(BSRC) -o $(BONUS)
$(NAME) : $(SRC)
	make bonus -C libft
	make -C ft_printf
	$(CC) $(CFLAGS) $(LIBFT) $(FT_PRINTF) $(SRC) -o $(NAME)

clean :
	make clean -C libft
	make clean -C ft_printf

fclean : clean
	make fclean -C libft
	make fclean -C ft_printf
	rm -rf $(BONUS)
	rm -rf $(NAME)

re : fclean all


