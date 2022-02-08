# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 17:46:49 by mazhari           #+#    #+#              #
#    Updated: 2022/02/08 14:09:27 by mazhari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CHECKER = checker

HEADER = push_swap.h\
		libft/libft.h\
		
HEADER_BONUS = push_swap.h\
			libft/libft.h\
			bonus/gnl/get_next_line.h\

LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

CC = gcc
FLAGS = -Wall -Werror -Wextra

SRCS =	main.c \
		get_stack.c \
		ft_atoll.c \
		exit_error.c \
		algo_utils.c \
		swap.c \
		push.c \
		rotate.c \
		reverse_rotate.c \
		algo.c \

SRCS_BONUS = bonus/checker.c \
			bonus/algo_utils.c \
			bonus/get_stack.c \
			bonus/ft_atoll.c \
			bonus/exit_error.c \
			bonus/swap.c \
			bonus/push.c \
			bonus/rotate.c \
			bonus/reverse_rotate.c \
			bonus/gnl/get_next_line.c \
			bonus/gnl/get_next_line_utils.c
		
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS) $(LIBFT_LIB)  $(HEADER)
	$(CC) $(FLAGS) $(LIBFT_LIB) $(OBJS) -o $(NAME)

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR) 

bonus: $(NAME) $(OBJS_BONUS) $(HEADER_BONUS)
	$(CC) $(FLAGS) $(LIBFT_LIB) $(OBJS_BONUS) -o $(CHECKER)

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJS_BONUS)
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(CHECKER)
	$(RM) $(LIBFT_LIB)

re: fclean all

.PHONY: all clean fclean re bonus
