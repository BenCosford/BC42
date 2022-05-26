# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcosford <bcosford@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 16:23:08 by bcosford          #+#    #+#              #
#    Updated: 2022/05/25 11:21:45 by bcosford         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = libft.h

SHELL = /bin/sh

CC = gcc

FLAGS = -std=c99

CFLAGS = -Wall -Werror -Wextra -c -I

SRC_CHAR = ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c

SRC_CONVERSION = ft_atoi.c \
				 ft_itoa.c

SRC_MEMORY = ft_bzero.c \
			 ft_calloc.c \
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_memcpy.c \
			 ft_memmove.c \
			 ft_memset.c

SRC_PRINT = ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c
			
SRC_STR = ft_strchr.c \
		  ft_strdup.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_strmapi.c \
		  ft_striteri.c

		 

SRCS = $(SRC_CHAR) \
	   $(SRC_CONVERSION) \
	   $(SRC_MEMORY) \
	   $(SRC_PRINT) \
	   $(SRC_STR)


OBJS = $(SRCS:.c=.o)

BONUS_SRCS = 

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
		
bonus:

clean: 
	-rm $(OBJS)

fclean: clean
	-rm $(NAME)

re: fclean all
