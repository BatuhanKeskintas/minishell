# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/16 16:48:51 by batuhankeskintas  #+#    #+#              #
#    Updated: 2022/02/12 20:03:17 by bkeskint         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		=	ft_memset.c	ft_bzero.c ft_memcpy.c ft_memccpy.c ft_strlen.c \
				ft_strlcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c \
				ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_atoi.c \
				ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_strcmp.c

SRCS_B		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				

BINS 		=	$(SRCS:.c=.o)
BINS_B		=	$(SRCS_B:.c=.o)

INCLUDES 	= 	./
HEADER		=	libft.h
CC			=	gcc
RM			= 	rm -rf
CFLAG		= 	-Wall -Wextra -Werror

NAME		= 	libft.a

%.o: %.c ${HEADER}
			$(CC) -c $(CFLAGS) -o $@ $<

all:			$(NAME)

$(NAME):		$(BINS)
				$(CC) -c $(CFLAGS) -I$(INCLUDES) $(SRCS)
				ar rc $(NAME) $(BINS)
				ranlib $(NAME)
				
bonus:			$(BINS_B)
				$(CC) -c $(CFLAGS) -I$(INCLUDES) $(SRCS_B)
				ar rc $(NAME) $(BINS_B)
				ranlib $(NAME)

clean:		
				$(RM) $(BINS) $(BINS_B)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)