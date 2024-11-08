NAME = allo
SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)
OBJDIR = ./objs
OBJ_PATHS = $(addprefix $(OBJDIR)/, $(OBJS))
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME): $(OBJ_PATHS)
	$(CC) $(FLAGS) $(OBJ_PATHS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
