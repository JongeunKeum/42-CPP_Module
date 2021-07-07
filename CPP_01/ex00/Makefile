NAME = BraiiiiiiinnnzzzZ

CC = clang++
CFLAGS = -Wall -Wextra -Werror

OBJS_DIR = ./objs

INCS = ./Zombie.hpp

SRCS =	./main.cpp		\
		./Zombie.cpp	\
		./newZombie.cpp	\
		./randomChump.cpp

OBJS = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.cpp=.o)))

vpath %.cpp $(SRCS_DIR)

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^

$(OBJS_DIR) :
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.cpp | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -o $@ -I./$(INCS) -c $^

clean :
	@$(RM) -r $(OBJS_DIR)

fclean : clean
	@$(RM) $(NAME)

re : fclean all
