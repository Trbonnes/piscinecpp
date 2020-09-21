CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

OBJECTS = main.o Fixed.class.o calculator.o

NAME = eval_expr

all:	$(NAME)

$(NAME):	$(OBJECTS)
			$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
