# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 23:31:40 by ayalman           #+#    #+#              #
#    Updated: 2021/12/15 02:02:58 by ayalman          ###   ########.Tr        #
#                                                                              #
# **************************************************************************** #
INC = includes
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c 
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
ID = libft.a
LIBC = ar rc
LIBR = ranlib
CC = gcc

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${OBJS}

re: fclean all

all: ${ID}


${ID}: ${OBJS}



