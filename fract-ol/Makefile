# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvieira <lvieira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 17:44:52 by lvieira           #+#    #+#              #
#    Updated: 2022/03/23 18:04:13 by lvieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fract-ol

LIBX_DIR = ./lib/minilibx_mms_20191025_beta

LIBX_LIB = -L$(LIBX_DIR) -l$(LIBX_DIR)

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

SRCS = main.c

OBJS = ${SRCS:.c=.o}

RM = rm -f

.c.o: 
	$(CC) $(CC_FLAGS) -I$(LIBX_DIR) -c $< -o $@


$(NAME): $(OBJS)
	make -C $(LIBX_DIR)
	cp $(LIBX_DIR)/libmlx.dylib .
	$(CC) $(OBJS) $(LIBX_LIB) -framework OpenGL -framework AppKit -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re