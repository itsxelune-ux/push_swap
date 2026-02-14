# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omitrovs <omitrovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/14 18:30:53 by omitrovs          #+#    #+#              #
#    Updated: 2026/02/14 18:33:49 by omitrovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
LIBFT_PATH  = ./libft
LIBFT_NAME  = $(LIBFT_PATH)/libft.a

SRCS        = src/cmds/push.c \
			src/cmds/reverse_rotate.c \
			src/cmds/rotate.c \
			src/cmds/swap.c \
			src/sort/sort_move_node.c \
			src/sort/sort_rotations.c \
			src/sort/sort_small.c \
			src/sort/sort_utils.c \
			src/sort/sort.c \
			src/list.c \
			src/parsing.c \
			src/push_swap.c \
			src/utils.c

OBJS        = $(SRCS:.c=.o)

INCLUDES    = -I. -I$(LIBFT_PATH)

all: $(LIBFT_NAME) $(NAME)

$(LIBFT_NAME):
	@$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBFT_NAME)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_PATH) -lft -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	@$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re
