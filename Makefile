# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsohler <lsohler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 10:40:12 by lsohler           #+#    #+#              #
#    Updated: 2022/11/16 15:40:09 by lsohler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
INCLUDE		= include/
PRINTF_LIB	= printflib/
LIBFT_DIR	= libft/
OBJS_DIR	= objs/
CC		= gcc
CFLAGS		= -Wall -Werror -Wextra
RM		= rm -f
AR		= ar rcs

SRC_F		= ft_printfchar.c ft_printfhex.c ft_printfnbr.c ft_printfstr.c ft_printfunbr.c\
		ft_printfptr.c

SRCS		= $(addprefix $(PRINTF_LIB), $(SRC_F))

OBJS		= $(SRCS_F:%.c=$(OBJS_DIR)/%.o)


all:		$(NAME)

$(NAME):	$(OBJS) $(LIBFT)
			$(AR) $(NAME) $(OBJS)

$(OBJS):	$(OBJS_DIR)/%.o: $(PRINTF_LIB)/%.c
			mkdir -p $(OBJS_DIR)
			$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

$(LIBFT):	
			make -C $(LIBFT_DIR)
			cp $(LIBFT_DIR)/libft.a $(NAME)

clean:
			make clean -C $(LIBFT_DIR)
			rm -rf $(OBJS_DIR)

fclean:		clean
			make fclean -C $(LIBFT_DIR)
			$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re

