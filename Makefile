# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alcornea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/16 14:16:03 by alcornea          #+#    #+#              #
#    Updated: 2017/04/18 03:13:20 by alcornea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libftprintf.a
#
#
# SRCS =  ft_printf.c \
# 	get_modifiers.c \
# 	invalid_conversion.c \
# 	ft_itoa_base.c \
# 	ft_itoa_x_base.c \
# 	initialize.c \
# 	check_flags.c \
# 	convert_int_to_ascii.c \
# 	convert_unsigned_to_ascii.c \
# 	handle_integers.c \
# 	convert_integers.c \
# 	handle_big_d.c \
# 	handle_big_u.c \
# 	handle_flags.c \
# 	handle_plus_space.c \
# 	handle_unsigned_int.c \
# 	handle_pointers.c \
# 	handle_hex.c \
# 	handle_octal.c \
# 	handle_chars.c \
# 	handle_uns_chars.c \
# 	handle_strings.c \
# 	handle_wchar_t.c \
# 	handle_wstr_t.c \
# 	handle_float.c \
# 	ft_atoi.c \
# 	ft_ftoa.c \
# 	ft_bzero.c \
# 	ft_isdigit.c \
# 	ft_isalpha.c \
# 	ft_itoa.c \
# 	ft_memalloc.c \
# 	ft_memset.c \
# 	ft_putchar.c \
# 	ft_putstr.c \
# 	ft_strchr.c \
# 	ft_strdup.c \
# 	ft_strjoin.c \
# 	ft_strilen.c \
# 	ft_strnew.c \
# 	ft_strsub.c \
# 	ft_wstrdup.c \
# 	ft_wmemset.c \
# 	ft_wstrjoin.c \
#
# OBJS = $(SRCS:.c=.o)
#
# all: $(NAME)
#
# $(NAME):
# 	@gcc -Wall -Werror -Wextra -c $(SRCS)
# 	@ar rc $(NAME) $(OBJS)
# 	@ranlib $(NAME)
#
# clean:
# 	@/bin/rm -f $(OBJS)
#
# fclean: clean
# 	@/bin/rm -f $(NAME)
#
# re: fclean all

.PHONY: all, $(NAME), test, clean, fclean, re

NAME=	ft_printf

CC= gcc -g

CFLAGS+= -Wall -Wextra -Werror

SRC_PATH= src/
INC_PATH= includes/
OBJ_PATH= obj/
LIBFT_PATH= libft/

OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC = $(addprefix -I ,$(INC_PATH))
INC_LFT = $(addprefix -I ,$(addprefix $(LIBFT_PATH), $(INC_PATH)))

OBJ_NAME = $(SRC_NAME:.c=.o)
SRC_NAME = main.c \
					ft_printf.c \
					get_modifiers.c \
					invalid_conversion.c \
					ft_itoa_x_base.c \
					initialize.c \
					check_flags.c \
					convert_int_to_ascii.c \
					convert_unsigned_to_ascii.c \
					handle_integers.c \
					handle_big_d.c \
					handle_big_u.c \
					handle_flags.c \
					handle_plus_space.c \
					handle_unsigned_int.c \
					handle_pointers.c \
					handle_hex.c \
					handle_octal.c \
					handle_chars.c \
					handle_uns_chars.c \
					handle_strings.c \
					handle_wchar_t.c \
					handle_wstr_t.c \
					handle_float.c \

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT_PATH)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L$(LIBFT_PATH) -lft

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) $(INC) $(INC_LFT) -o $@ -c $<

test: $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L$(LIBFT_PATH) -lft

clean:
	make -C $(LIBFT_PATH) clean
	rm -rf $(OBJ_PATH)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all
