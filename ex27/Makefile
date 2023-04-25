# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 16:31:52 by marvin            #+#    #+#              #
#    Updated: 2023/04/25 20:31:02 by pbrossa-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

FILES = $(wildcard ./src/*.c)

HEADER = $(wildcard ./includes/*.h)

OBJS = $(FILES:.c=.o)

CFLAGS	=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

%.o: %.c
	gcc $(CFLAGS) $(INCLUDE) -c $< -o $@

.PHONY: all clean fclean