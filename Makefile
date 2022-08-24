# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 14:21:08 by cocheong          #+#    #+#              #
#    Updated: 2022/08/20 22:46:42 by cocheong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= gcc -Wall -Wextra -Werror

PATH_SRCS	= ./src/

HEADER	= ./includes/

OPTION	= -c -I ${HEADER}

SRCS = $(wildcard ./*.c)

OBJ	= ${SRCS:.c=.o}

BONUS = ${wildcard ./*.c}

BONUS_OBJS = ${BONUS:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
		ar rc ${NAME} ${OBJ}
	
.c.o:		
		$(CC) ${OPTION} $< -o $(<:.c=.o)

clean:
		/bin/rm -rf ${OBJ}

fclean: clean
		/bin/rm -rf ${NAME}

re: fclean all

bonus: ${OBJS} ${BONUS_OBJS}
		ar rc ${NAME} ${OBJS} ${BONUS_OBJS}

.PHONY: all clean fclean re bonus
