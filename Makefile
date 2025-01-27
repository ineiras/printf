# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ineiras- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 12:31:39 by ineiras-          #+#    #+#              #
#    Updated: 2025/01/23 13:23:42 by ineiras-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** # 
NAME = libftprintf.a

LIBFT_DIR = libft

SRC = ft_printf.c ft_print_char.c ft_print_number.c ft_print_string.c \
	ft_print_unsigned_number.c ft_print_hexa.c ft_print_ptr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_DIR)/libft.a Makefile
	cc -Wall -Wextra -Werror $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)

$(LIBFT_DIR)/libft.a:
	make -C $(LIBFT_DIR)

%.o: %.c
	cc -Wall -Wextra -Werror -I$(LIBFT_DIR) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf *.o
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all
