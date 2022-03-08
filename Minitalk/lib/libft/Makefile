# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 12:55:16 by lvieira           #+#    #+#              #
#    Updated: 2022/03/08 22:42:33 by lvieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_putchar.c ft_putnbr_fd.c ft_putstr_fd.c ft_strdup.c ft_strlen.c

OBJS	= ${SRCS:.c=.o}

INCS = .

LIBC = ar -rcs

NAME	= libft.a

FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

CC		= gcc

.c.o:	
		${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
		 ${LIBC} ${NAME} ${OBJS}

all:	${NAME}

clean:	
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
