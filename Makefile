# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luntiet- <luntiet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 09:37:40 by luntiet-          #+#    #+#              #
#    Updated: 2023/03/29 18:04:45 by luntiet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_toupper.c \
			ft_tolower.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_isdigit.c \
			ft_isalpha.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strlen.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_memchr.c \
			ft_memcpy.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_memset.c \
			ft_bzero.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_putendl_fd.c \
			ft_split.c \
			ft_atol.c \
			ft_free_stra.c \
			ft_stra_len.c \
			is_number.c \
			ft_strtod.c

SRCLST = ft_lstnew.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstadd_front.c \
			ft_lstadd_back.c \
			ft_lstclear.c \
			ft_lstmap.c \

SRCPRINTF = ./printf/ft_printf.c \
			./printf/utils/ft_counthex.c \
			./printf/utils/ft_puthex.c \
			./printf/printer/ft_print_bigx.c \
			./printf/printer/ft_print_chr.c \
			./printf/printer/ft_print_dec.c \
			./printf/printer/ft_print_ptr.c \
			./printf/printer/ft_print_str.c \
			./printf/printer/ft_print_udec.c \
			./printf/printer/ft_print_x.c \

SRCGNL= ./gnl/get_next_line.c \
			./gnl/get_next_line_utils.c

OBJ = $(SRC:.c=.o)

OBJLST = $(SRCLST:.c=.o)

OBJPRINTF = $(SRCPRINTF:.c=.o)

OBJGNL = $(SRCGNL:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(OBJPRINTF) $(OBJGNL) $(OBJLST)
	@ar rcs $(NAME) $(OBJ) $(OBJLST) $(OBJPRINTF) $(OBJGNL)

%.o : %.c
		@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@rm -f $(OBJ) $(OBJLST) $(OBJPRINTF) $(OBJGNL)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
