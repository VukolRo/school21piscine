# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shavok <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/01 12:16:26 by shavok            #+#    #+#              #
#    Updated: 2021/08/01 21:29:41 by shavok           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCSD		= ./srcs/

INCLUDESD	= ./includes/

SRCS		= ${SRCSD}ft_putchar.c	${SRCSD}ft_swap.c	${SRCSD}ft_putstr.c\
			  ${SRCSD}ft_strlen.c	${SRCSD}ft_strcmp.c

HEADER		= ${INCLUDESD}ft.h

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

GCC			= gcc
RM			= rm -f
AR			= ar rc
RL			= ranlib
MV			= mv

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${GCC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEADER}

${NAME} :	${OBJS} 
			${AR} ${NAME} ${OBJS} 
			${RL} ${NAME}
		#	$(if $(wildcard ${HEADER}), ${MV} ${HEADER} ./)


all :		${NAME}
	

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
