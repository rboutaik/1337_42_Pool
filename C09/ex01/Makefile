# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 23:20:01 by rboutaik          #+#    #+#              #
#    Updated: 2023/08/03 09:07:34 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ./srcs/

INC = ./includes/

CFILES = $(SRC)ft_putchar.c $(SRC)ft_swap.c $(SRC)ft_putstr.c $(SRC)ft_strlen.c $(SRC)ft_strcmp.c

OBJ = $(CFILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(SRC)%.o : $(SRC)%.c
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
