# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/26 20:03:33 by bkeskint          #+#    #+#              #
#    Updated: 2022/03/10 00:55:27 by bkeskint         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

NAME		=	minishell

LIB_PATH	=	./libft

SRC_PATH	=	./source

INC_PATH	=	./header

LIBRARY		=	libft.a

MAKE		=	make

SRC			=	main.c		duplicate.c		initialization.c	error_management.c \
				ifspace.c	route.c			arguments_helper.c	error_management2.c \
				handler_execution.c			check.c				fork_handler_helper.c \
				back.c		libfthelper.c	parse_helpers.c		jumper_helpers.c	\
				builtins.c	do_builtins1.c	builtins_helper.c	do_builtins2.c		\
				libfthelper2.c				export_helper.c		io_handler.c		\
				exportarg_helper.c			unset_helper.c		i_handler_helper.c	\
				handle_write.c				o_handler_helper.c	exit_management.c	\
				execute_handler_helper.c	comments_handle.c	gnl.c				\
				
						
OBJ			=	$(addprefix $(SRC_PATH)/, $(SRC:.c=.o))

LINKS		=	-I$(LIB_PATH) \
				-L$(LIB_PATH) \
				-I$(INC_PATH) \
				-lft \
				-lreadline

all:			$(LIBRARY) $(NAME)

$(LIBRARY):
			$(MAKE) -C $(LIB_PATH)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(CFLAGS) $(OBJ) $(LINKS) 

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)
			$(MAKE) -C $(LIB_PATH) fclean

re:			fclean all

.PHONY: all clean fclean re norm