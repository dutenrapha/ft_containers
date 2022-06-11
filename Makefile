
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CC = c++
PERFORMANCE_FILE = performance.cpp
PERFORMANCE_FILE_FT = performanceFT.cpp
PERFORMANCE_FILE_STL = performanceSTL.cpp
FILE = main.cpp
NAME = main 

all: $(NAME)

clean:
	rm -f performance
	rm -f performanceFT
	rm -f performanceSTL
	rm -f *.o

fclean: clean
	rm -f $(NAME)

test:
	./$(NAME)
	./performance 2 all

re: fclean all test

$(NAME):
	$(CC) $(FLAGS) $(FILE) -g -o $@
	$(CC) $(FLAGS) $(PERFORMANCE_FILE) -g -o performance
	$(CC) $(FLAGS) $(PERFORMANCE_FILE_FT) -g -o performanceFT
	$(CC) $(FLAGS) $(PERFORMANCE_FILE_STL) -g -o performanceSTL
