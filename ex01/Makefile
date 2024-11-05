NAME = allo
SRCS = main.cpp Contact.cpp PhoneBook.cpp
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME): $(SRCS)
		 $(CC) $(FLAGS) $(SRCS) -o $(NAME)
clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all
