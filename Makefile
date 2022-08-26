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

CC	= gcc

CFLAGS = -Wall -Wextra -Werror -c

PATH_SRCS	= ./src/

SRCS = $(wildcard ./*.c)

OBJ	= $(SRCS:.c=.o)

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c 

BONUS_OBJS = $(BONUS:.c=.o)

AR = ar rcs

all: $(NAME)

.c.o:		
		$(CC) $(CFLAGS) $< -o $(<:.c=.o)

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)

clean:
		/bin/rm -rf $(OBJ)

fclean: clean
		/bin/rm -rf $(NAME)

re: fclean all

bonus: $(BONUS_OBJS)
		$(AR) $(NAME) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
