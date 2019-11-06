# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfeuilla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/12 21:26:30 by jfeuilla          #+#    #+#              #
#    Updated: 2019/11/05 16:05:12 by jfeuilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= ${wildcard srcs/*.c}

HEADER		= -I includes/

CC			= gcc

FLAGS		= -Wall -Wextra -Werror

OBJS		= ${SRCS:.c=.o}

.c.o:
			${CC} ${FLAGS} ${HEADER} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
