# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 10:40:12 by lsohler           #+#    #+#              #
#    Updated: 2022/11/22 16:07:58 by lsohler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
INCLUDE		= include/
PRINTF_LIB	= printflib/
LIBFT_DIR	= libft/
LIBFT       = libft.a
OBJS_DIR	= objs/
CC		= gcc
CFLAGS		= -Wall -Werror -Wextra
RM		= rm -f
AR		= ar rcs

SRC_F		= ft_printfchar.c ft_printfhex.c ft_printfnbr.c ft_printfstr.c ft_printfunbr.c\
		ft_printfptr.c ft_printf.c

SRCS		= $(addprefix $(PRINTF_LIB), $(SRC_F))

OBJS		= $(SRCS:.c=.o)

.c.o:
			$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

all:		$(NAME)

$(NAME):	$(LIBFT) $(OBJS)
			$(AR) $(NAME) $(OBJS)
			@echo "FINISHED"


$(LIBFT):
			make -C $(LIBFT_DIR) 
			cp $(LIBFT_DIR)$(LIBFT) $(NAME)
			@echo "000000000000000000000000"

clean:
			make clean -C $(LIBFT_DIR)
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(LIBFT_DIR)$(LIBFT)
			$(RM) $(NAME) $(OBJS)

re:		fclean all

.PHONY: all clean fclean re

