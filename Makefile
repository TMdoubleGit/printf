# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 11:05:17 by tmichel-          #+#    #+#              #
#    Updated: 2022/12/02 15:59:18 by tmichel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c\
		  ft_printf_utils.c\
		  libft_utils.c\
		  ft_printhexa.c\
		  ft_printptr.c\
		  ft_printunsigned.c\

OBJS	= ${SRCS:.c=.o}

INC		= libftprintf.h

LIB		= ar rcs

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${INC}
			${LIB} ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean

re:			fclean
			@make all

.PHONY:		all clean fclean re .c .o