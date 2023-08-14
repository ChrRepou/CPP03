CC = c++

CFLAGS  = -g -Wall -Wextra -Werror -std=c++98

TARGET = main
SOURCES = main.cpp ClapTrap.cpp
OBJ = main.o ClapTrap.o

all: exec

exec: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

$(TARGET).o: $(TARGET).cpp ClapTrap.hpp
	$(CC) $(CFLAGS) -c $(TARGET).cpp

ClapTrap.o: ClapTrap.cpp ClapTrap.hpp
	$(CC) $(CFLAGS) -c ClapTrap.cpp

clean:
	$(RM) main $(OBJ)

fclean:
	make clean

re: fclean all