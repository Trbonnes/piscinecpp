CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

OBJECTS = main.o Base.o A.o B.o C.o

NAME = base

all:	$(NAME)

$(NAME):	$(OBJECTS)
			$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
