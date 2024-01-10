# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 20:07:56 by rboutaik          #+#    #+#              #
#    Updated: 2023/08/03 20:05:10 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = do-op

CFILES = do_op.c funcs.c

HFILES = funcs.h

OFILES = $(CFILES:.c=.o)

$(NAME) : $(OFILES)
	@$(CC) $(FLAGS) -o $(NAME) $(OFILES)

%.o : %.c $(HFILES)
	@$(CC) $(FLAGS) -I $(HFILES) -c $< -o $@

all : $(NAME)

clean :
	@rm -f $(OFILES)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : clean flean all re
