# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 15:33:06 by gscuderi          #+#    #+#              #
#    Updated: 2024/03/04 20:47:21 by gscuderi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = ft_printf.h

SOURCES =   ft_printf.c \
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putnbr_fd.c\
			ft_putnbr_base.c\
			ft_putptr.c

OBJS = $(SOURCES:.c=.o)

FLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rcs


$(NAME) : $(OBJS)
	${AR} ${NAME} ${OBJS}

%.o : %.c $(HEADER)
	gcc ${FLAGS} -c $< -o $@

all : $(NAME)

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

programma : $(NAME)
	gcc mytest.c -o $@ $(OBJS) -L. -lftprintf

.PHONY: all, clean, fclean, re
