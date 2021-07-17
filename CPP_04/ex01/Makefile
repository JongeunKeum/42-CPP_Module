NAME = wasteland

CC = clang++
CFLAGS = -Wall -Wextra -Werror

OBJS_DIR = ./objs

SRCS =	main.cpp		\
		AWeapon.cpp		\
		Character.cpp	\
		Enemy.cpp		\
		PlasmaRifle.cpp	\
		PowerFist.cpp	\
		RadScorpion.cpp	\
		SuperMutant.cpp

OBJS = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.cpp=.o)))

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^

$(OBJS_DIR) :
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.cpp | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -o $@ -c $^

clean :
	@$(RM) -r $(OBJS_DIR)

fclean : clean
	@$(RM) $(NAME)

re : fclean all
