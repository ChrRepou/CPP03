CC = c++

CFLAGS  = -g -Wall -Wextra -Werror -std=c++98

TARGET = main
SOURCES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ = main.o ClapTrap.o ScavTrap.o FragTrap.o

all: exec

exec: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

$(TARGET).o: $(TARGET).cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(CFLAGS) -c $(TARGET).cpp

ClapTrap.o: ClapTrap.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(CFLAGS) -c ClapTrap.cpp

ScavTrap.o: ScavTrap.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(CFLAGS) -c ScavTrap.cpp

FragTrap.o: FragTrap.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(CFLAGS) -c FragTrap.cpp

clean:
	$(RM) main $(OBJ)

fclean:
	make clean

re: fclean all