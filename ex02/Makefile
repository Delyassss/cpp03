CXX      = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC      = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ      = $(SRC:.cpp=.o)
NAME     =  fragTrap

all: $(NAME)


$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp fragTrap.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all