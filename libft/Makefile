# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghaas <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/16 17:00:14 by ghaas             #+#    #+#              #
#    Updated: 2017/01/10 17:38:40 by ghaas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

CC = gcc

OBJ = ft_atoi.o ft_bzero.o ft_capitalize.o ft_countwords.o \
		ft_capitalize.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
		ft_isdigit.o ft_islower.o ft_isprint.o ft_isupper.o ft_itoa.o \
		ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
		ft_memdel.o ft_memmove.o ft_memset.o ft_putchar.o ft_putchar_fd.o \
		ft_putendl.o ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o ft_putstr.o \
		ft_putstr_fd.o ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o \
		ft_strcpy.o ft_strdel.o ft_strdup.o ft_strequ.o ft_striter.o \
		ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlen.o ft_strmap.o \
		ft_strmapi.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strndup.o \
		ft_strnequ.o ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strsplit.o \
		ft_strstr.o ft_strsub.o ft_strtrim.o ft_tolower.o ft_toupper.o \
		ft_lstadd.o ft_lstdel.o ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o


all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
