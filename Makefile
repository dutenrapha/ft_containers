
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CC = c++
PERFORMANCE_FILE = performance.cpp
FILE = main.cpp
NAME = main 

all: $(NAME)

fclean:
	rm -f $(NAME)
	rm -f performance
	rm -f *.o

test:
	./$(NAME)
	./performance 2 all

re: fclean all test

$(NAME):
	$(CC) $(FLAGS) $(FILE) -g -o $@
	$(CC) $(FLAGS) $(PERFORMANCE_FILE) -g -o performance
