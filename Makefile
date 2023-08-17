# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 18:45:27 by barjimen          #+#    #+#              #
#    Updated: 2023/08/17 19:55:42 by barjimen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILE_C = 	ft_putchar.c \
			ft_putnbr.c \
			ft_putnbru.c \
			ft_putstr.c  \
			ft_printf.c  \
			ft_hexa.c 	 \
			ft_strlen.c	 \
			ft_x_or_X.c  \
			ft_point.c 	 \
			
FILE_O = ${FILE_C:.c=.o}
FILE_O_BONUS = ${FILE_C_BONUS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra #-Werror

${NAME}: ${FILE_O}
	ar -rcs ${NAME} ${FILE_O}

all: $(NAME)

clean: 
	rm -f $(FILE_O) $(FILE_O_BONUS)

fclean: clean
	rm -f $(NAME) a.out

re: fclean all

bonus: $(FILE_O_BONUS)
	ar -rcs ${NAME} ${FILE_O} ${FILE_O_BONUS}
	@#make "FILE_C = $(FILE_C_BONUS)"

test: $(NAME)
	$(CC) $(CFLAGS) main.c -L. -lftprintf

.Phony: all clean fclean re
		
		