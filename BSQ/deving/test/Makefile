# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncream <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 07:05:07 by ncream            #+#    #+#              #
#    Updated: 2021/08/11 21:01:49 by ncream           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= bsq.c ft_create_struct.c ft_find_max_sqr.c ft_min_of_vlues.c ft_find_sqr.c \
		  ft_map_to_arr.c ft_taking_vars.c ft_check_error.c ft_open_read.c ft_no_args.c\
		  ft_print_error.c ft_print_max_sqr.c
HEADR	= bsq.h
OBJS	= ${SRCS:.c=.o}
NAME	= bsq
CC		= gcc
RM		= rm -f
CFLAGS	= -include ${HEADR} -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}
			${RM} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
