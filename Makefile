
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CC = c++
FILE = mainPerformance.cpp
NAME = main 

all: $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.o

test:
	./$(NAME)

re: fclean all test

$(NAME):
	$(CC) $(FLAGS) $(FILE) -g -o $@
