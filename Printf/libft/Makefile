# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 12:55:16 by lvieira           #+#    #+#              #
#    Updated: 2021/07/26 23:14:42 by lvieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_putnbr_base.c \
		  ft_putchar.c \
		  ft_putstr_fd.c ft_strchr.c ft_strlen.c \
			ft_putnbr_fd.c

OBJS	= ${SRCS:.c=.o}

OBJS_B	= $(SRCS_B:.c=.o)

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

bonus:	${NAME} ${OBJS_B}
		${LIBC} ${NAME} ${OBJS_B}

clean:	
		${RM} ${OBJS} ${OBJS_B}

fclean:	clean
		${RM} ${NAME} ${bonus}

re:		fclean all

.PHONY:	all clean fclean re
