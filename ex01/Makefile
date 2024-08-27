NAME		=	Basic_intelligence

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++17 -Wshadow
INCLUDES	=	-I include

_HEADER		=	Animal.hpp\
				Dog.hpp\
				Cat.hpp\
				WrongAnimal.hpp\
				WrongCat.hpp\
				Brain.hpp
HEADER		=	$(addprefix include/, $(_HEADER))
_SRC		=	main.cpp\
				Animal.cpp\
				Dog.cpp\
				Cat.cpp\
				WrongAnimal.cpp\
				WrongCat.cpp\
				Brain.cpp
SRC			=	$(addprefix src/, $(_SRC))
OBJ			=	$(SRC:src/%.cpp=bin/%.o)

all: $(NAME)

bin:
	@mkdir -p bin/

bin/%.o: src/%.cpp $(HEADER) | bin
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re