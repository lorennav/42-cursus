# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 12:55:16 by lvieira           #+#    #+#              #
#    Updated: 2021/02/25 22:44:26 by lvieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		  ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		  ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		  ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
			ft_putnbr_fd.c ft_putendl_fd.c


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
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
