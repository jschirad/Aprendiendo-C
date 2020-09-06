# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschirad <jschirad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/06 21:08:40 by jschirad          #+#    #+#              #
#    Updated: 2020/09/06 21:15:20 by jschirad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)

GCC			= clang++
RM			= rm -f
CCFLAGS		= -Wall -Werror -Wextra -I.
NAME		= megaphone
all:		$(NAME)
$(NAME):	$(OBJS)
			$(GCC) $(CCFLAGS) -o $(NAME) $(OBJS)
clean:
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean $(NAME)

test:		$(NAME)
			./megaphone "shhhhh... I think the students are asleep..."
			./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
			./megaphone
.PHONY:		all clean fclean re test
