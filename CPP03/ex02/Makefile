NAME	=	clapTrap

CC		=	c++

FLAGS	=	-Werror -Wextra -Wall -std=c++98 

SRCS	=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			
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