CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

OBJECTS = main.o

NAME = convert

all:	$(NAME)

$(NAME):	$(OBJECTS)
			$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
