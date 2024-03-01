# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscuderi <gscuderi@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 15:33:06 by gscuderi          #+#    #+#              #
#    Updated: 2024/03/01 18:37:37 by gscuderi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = myprintf.h

SOURCES =   ft_printf_fd.c \
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
	gcc ${FLAGS} -o $< -c $@

all : $(NAME)

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all, clean, fclean, re
