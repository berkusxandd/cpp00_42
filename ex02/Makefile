NAME = gbu
SRCS = tests.cpp Account.cpp
CC = c++
FLAGS = -std=c++98

all : $(NAME)

$(NAME): $(SRCS)
		 $(CC) $(FLAGS) $(SRCS) -o $(NAME)
clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all
