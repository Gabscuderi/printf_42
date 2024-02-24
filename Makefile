# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscuderi <gscuderi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 15:33:06 by gscuderi          #+#    #+#              #
#    Updated: 2024/02/24 17:07:38 by gscuderi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = printf.h

SOURCES = ft_putnbr_base.c

OBJS = $(SOURCES:.c=.o)

FLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rcs

$(NAME) : $(OBJS)
	${AR} ${NAME} ${OBJS}

%.o : %.c $(HEADER)
	gcc ${FLAGS} -o $<

all : $(NAME)

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all, clean, fclean, re
