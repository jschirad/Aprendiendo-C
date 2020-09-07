# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/06 07:13:49 by marvin            #+#    #+#              #
#    Updated: 2020/07/09 11:12:33 by jschirad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= replace.cpp
OBJS			= $(SRCS:.cpp=.o)

GCC				= clang++
RM				= rm -f
CCFLAGS			= -Wall -Werror -Wextra -I.

NAME			= replace

all:			$(NAME)

$(NAME):		$(OBJS)
						$(GCC) $(CCFLAGS) -o $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)
re:				fclean $(NAME)

.PHONY:			all clean fclean re test
