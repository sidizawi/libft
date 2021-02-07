# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szawi <szawi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 18:21:52 by szawi             #+#    #+#              #
#    Updated: 2021/02/07 15:30:35 by szawi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

CHECKER =	src/checker/ft_isdigit.c src/checker/ft_isascii.c\
			src/checker/ft_isalnum.c src/checker/ft_isalpha.c\
			src/checker/ft_isprint.c

CONVERT =	src/convert/ft_atoi.c src/convert/ft_itoa.c\
			src/convert/ft_tolower.c src/convert/ft_toupper.c

DISPLAY =	src/display/ft_putnbr_fd.c src/display/ft_putstr_fd.c\
			src/display/ft_putchar_fd.c src/display/ft_putendl_fd.c

MEMORY =	src/memory/ft_bzero.c src/memory/ft_calloc.c\
			src/memory/ft_memccpy.c src/memory/ft_memchr.c\
			src/memory/ft_memcmp.c src/memory/ft_memcpy.c\
			src/memory/ft_memmove.c src/memory/ft_memset.c

STRING =	src/string/ft_strlcpy.c src/string/ft_strtrim.c\
			src/string/ft_split.c src/string/ft_strlen.c\
			src/string/ft_substr.c src/string/ft_strchr.c\
			src/string/ft_strmapi.c src/string/ft_strdup.c\
			src/string/ft_strncmp.c src/string/ft_strlcat.c\
			src/string/ft_strrchr.c src/string/ft_strjoin.c\
			src/string/ft_strnstr.c

SRCS =	${CHECKER} ${CONVERT} ${DISPLAY} ${MEMORY} ${STRING}

OBJS = ${SRCS:.c=.o}

SRCS_BONUS =	src/linked_list/ft_lstnew.c src/linked_list/ft_lstadd_front.c \
				src/linked_list/ft_lstsize.c src/linked_list/ft_lstlast.c\
				src/linked_list/ft_lstadd_back.c src/linked_list/ft_lstdelone.c \
				src/linked_list/ft_lstclear.c src/linked_list/ft_lstiter.c\
				src/linked_list/ft_lstmap.c

BONUS = ${SRCS_BONUS:.c=.o}

NAME = libft.a

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	${CC} ${CFLAGS} -I include -c $^ -o $@

$(NAME) :	${OBJS}
	ar -rcs ${NAME} ${OBJS}

all :	${NAME}

clean :
	${RM} ${OBJS} ${BONUS}

fclean :	clean
	${RM} ${NAME}

bonus: ${OBJS} ${BONUS}
	ar -rcs ${NAME} ${OBJS} ${BONUS}
	ranlib ${NAME}

re : fclean all

.PHONY : all clean fclean re
