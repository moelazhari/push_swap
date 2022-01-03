# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/30 15:48:31 by mazhari           #+#    #+#              #
#    Updated: 2022/01/03 21:12:17 by mazhari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

HEADER = push_swap.h\
		libft/libft.h\

LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a


CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS =	main.c \
		get_stack.c \
		ft_atoll.c \
		swap.c \
		push_a.c \
		push_b.c \
		exit_error.c \
		rotate.c \
		reverse_rotate.c \
		sort.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<
	
$(NAME): $(OBJS) $(LIBFT_LIB)  $(HEADER) 
	$(CC) $(CFLAGS) $(LIBFT_LIB) $(OBJS) -o $(NAME)	

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFT_DIR)
	
fclean: clean
	$(RM) $(NAME)
	$(MAKE) clean -C $(LIBFT_LIB)
re: fclean all

.PHONY: all clean fclean re bonus
