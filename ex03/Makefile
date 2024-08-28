NAME		=	Recap

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++17 -Wshadow
INCLUDES	=	-I include

_HEADER		=	AMateria.hpp\
				Cure.hpp\
				Ice.hpp\
				ICharacter.hpp\
				IMateriaSource.hpp\
				Mage.hpp\
				MagicStaff.hpp
HEADER		=	$(addprefix include/, $(_HEADER))
_SRC		=	main.cpp\
				AMateria.cpp\
				Cure.cpp\
				Ice.cpp\
				Mage.cpp\
				MagicStaff.cpp
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