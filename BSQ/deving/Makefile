
SRCS	= main.c ft_create_struct.c ft_no_args.c ft_open_read.c ft_putstr.c \
		  ft_show_error.c ft_talking_vars.c ft_map_to_arr.c
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