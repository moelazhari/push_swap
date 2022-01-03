# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazhari <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 15:15:37 by mazhari           #+#    #+#              #
#    Updated: 2021/11/14 15:41:34 by mazhari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=	gcc

FLAGS= -Wall -Wextra -Werror 

LIB  =  ar rc

NAME =	libft.a

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_memcpy.c \
	   	ft_memmove.c \
		ft_memchr.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BOUNS =	ft_lstnew.c	\
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

OBJS =	$(SRCS:.c=.o)
OBJS_BOUNS = $(BOUNS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

%.o : %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

bouns : all
	$(CC) $(FLAGS) $(BOUNS)
	$(LIB) $(NAME) $(OBJS_BOUNS)
clean:
	rm -f $(OBJS)
	rm -f $(OBJS_BOUNS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

