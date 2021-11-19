NAME	=	PhoneBook

CC		=	clang++

FLAGS	=	-Werror -Wextra -Wall -std=c++98 -I $(INCLUDE)

SRCS	=	Phonebook.cpp \
			Contact.cpp \

INCLUDE = 	Contact.hpp \

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