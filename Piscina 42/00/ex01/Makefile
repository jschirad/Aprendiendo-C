# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/07 10:03:04 by jschirad          #+#    #+#              #
#    Updated: 2020/09/07 10:03:14 by jschirad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ClassContact.cpp main.cpp
OBJS			= $(SRCS:.cpp=.o)

GCC				= clang++
RM				= rm -f
CCFLAGS			= -Wall -Werror -Wextra -I.

NAME			= phonebook

all:			$(NAME)

$(NAME):		$(OBJS)
						$(GCC) $(CCFLAGS) -o $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)
re:				fclean $(NAME)

.PHONY:			all clean fclean re test
