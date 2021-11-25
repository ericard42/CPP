NAME	=	Weapon

CC		=	c++

FLAGS	=	-Werror -Wextra -Wall -std=c++98 -I $(INCLUDE)

SRCS	=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp \
			
INCLUDE = 	Weapon.hpp \

OBJS	=	$(SRCS:.cpp=.o)

all		:	$(NAME)

$(NAME) :	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean	:
			rm -rf $(OBJS)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all

%.o 	:	%.cpp
			$(CC) $(FLAGS) -o $@ -c $<

.PHONY	: all clean fclean re