# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jole <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 16:47:08 by jole              #+#    #+#              #
#    Updated: 2022/10/31 12:30:07 by jole             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#delete main and test

SRC = main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c

OSRC = main.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o

WWW = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	cc -c $(SRC) $(WWW)
	ar rc $(NAME) $(OSRC)

clean: 
	rm -f $(OSRC)

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	gcc $(SRC) -I libft.h
leak:
	gcc $(SRC) -I libft.h -fsanitize="address"