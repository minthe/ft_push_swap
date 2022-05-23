# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 19:29:43 by vfuhlenb          #+#    #+#              #
#    Updated: 2022/04/18 18:51:58 by vfuhlenb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =		push_swap.c \
			src/utils/ft_isdigit.c \
			src/utils/ft_putchar.c \
			src/utils/ft_putstr.c \
			src/utils/ft_putnbr.c \
			src/utils/ps_check_nbr.c \
			src/utils/ps_error.c \
			src/utils/ps_stack_create.c \
			src/utils/ps_list_add_back.c \
			src/utils/ps_list_add_front.c \
			src/utils/ps_list_free.c \
			src/utils/ps_list_size.c \
			src/utils/ps_is_sorted.c \
			src/utils/ps_rank.c \
			src/utils/ps_get_min_pos.c \
			src/cmd/swap.c \
			src/cmd/push.c \
			src/cmd/rotate.c \
			src/sort_small.c \
			src/sort_big.c \
			src/sort_3.c \
OBJ = $(SRC:%.c=%.o)

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =

RM = /bin/rm -f
RMDIR = /bin/rmdir

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(LFLAGS) $^ -o $@

clean:
	$(RM) $(wildcard $(OBJ))
	@echo clean done

fclean: clean
	$(RM) $(NAME)
	@echo Fclean done

re: fclean all