# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 16:31:52 by marvin            #+#    #+#              #
#    Updated: 2023/04/19 16:31:52 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ./src

HEADER = ./includes

OBJS = $(FILES:.c=.o)

RM = rm -f

LIBC = ar -rcs

$(OBJS): $(FILES)
	gcc -c $< -o $@

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME)

re:
	fclean all

.PHONY: all clean fclean re