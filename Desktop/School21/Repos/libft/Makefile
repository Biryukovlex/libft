# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjoker <kjoker@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/26 15:18:44 by kjoker            #+#    #+#              #
#    Updated: 2020/05/29 19:50:01 by kjoker           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = ft_isalpha.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_memcpy.c \
		ft_putendl_fd.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_isascii.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_putnbr_fd.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_isdigit.c \
		ft_memchr.c \
		ft_memset.c \
		ft_putstr_fd.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_putchar_fd.c \
		ft_split.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_substr.c
HDR = libft.h
FLAGS = -Wall -Wextra -Werror
OBJ = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): $(SOURCES)
	gcc $(FLAGS) -c $(SOURCES) $(HDR)
	
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all
