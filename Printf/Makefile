# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 23:06:35 by lvieira           #+#    #+#              #
#    Updated: 2021/07/28 00:23:37 by lvieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft

CC = gcc

FLAGS := -Wall -Wextra -Werror -g -I .

RM = rm -f

SRCS = ft_printf.c ft_print_numbers.c ft_print_pointer_text.c

OBJS = $(SRCS:%.c=%.o)

%.o: %.c
	${CC} ${FLAGS} -c -o $@ $< 

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT)
	cp $(LIBFT)/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

clean:
	make fclean -C $(LIBFT)
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re