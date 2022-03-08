# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 12:55:16 by lvieira           #+#    #+#              #
#    Updated: 2022/03/08 21:17:38 by lvieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk

NAME_SERVER	= server

NAME_CLIENT = client

SRCS_CLIENT = srcs/client.c

SRCS_SERVER	= srcs/server.c

OBJS_CLIENT	= ${SRCS_CLIENT:.c=.o}

OBJS_SERVER	= ${SRCS_SERVER:.c=.o}

LIBS	=	./lib/libft

FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

CC		= gcc

.c.o:	
		${CC} ${FLAGS} -I. -c $< -o ${<:.c=.o}

libft:
		make -C ${LIBS}

${NAME_SERVER}: libft ${OBJS_SERVER}
		${CC} ${FLAGS} -o ${NAME_SERVER} ${LIBS}/libft.a ${OBJS_SERVER}

${NAME_CLIENT}: libft ${OBJS_CLIENT}
		${CC} ${FLAGS} -o ${NAME_CLIENT} ${LIBS}/libft.a ${OBJS_CLIENT}

all: ${NAME_CLIENT} ${NAME_SERVER} 

${NAME}: all

clean:	
			make clean -C ${LIBS}
			${RM} ${OBJS_SERVER} ${OBJS_CLIENT}

fclean:	clean
				make fclean -C ${LIBS}
				${RM} ${NAME_CLIENT} ${NAME_SERVER}

re:		fclean all

.PHONY:	all clean fclean re
